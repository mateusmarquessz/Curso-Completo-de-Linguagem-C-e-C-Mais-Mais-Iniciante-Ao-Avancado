#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    int c; //Cursor que irá percorrer cada letra

    char conteudoTexto[255]; // vetor

    //Contador das letras lidas
    int cont = 0;
 
    //Arquivo a ser lido
    FILE *file;  // ponteiro para o arquivo
 
    //Abre o arquivo no diretório escolhido
    file = fopen("Texto.txt", "r"); // meu arquivo vai receber o endereco de memoria proviniente da funcao fopen
 
 
    //Se o arquivo foi encontrado
    if(file){ //Se o arquivo foi encontrado
 
        //Encontra encontra letras(até o fim do arquivo)
        while((c = getc(file)) != EOF){ //EOF end of file
 
            //Imprime na tela
            //printf("%c", c);
 
            //Vetor de char recebe a letra atual
            conteudoTexto[cont] = c; // vai receber a leitura do cursor
 
            //Aumenta a contagem de letras
            cont++;
 
        }
 
        //Fecha o arquivo
        fclose(file);
 
    }
 
    //Imprimindo conteúdo lido
    for(cont = 0; cont < strlen(conteudoTexto) -2; cont++){ // strlen número de caracteres do string
        printf("%c",conteudoTexto[cont] );
    }
 
    return 0;
}