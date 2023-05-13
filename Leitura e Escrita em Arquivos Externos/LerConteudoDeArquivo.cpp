#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    //Cursor que irá percorrer cada letra
    int c;
    char conteudoTexto[255];
    //Contador
    int cont = 0;
 
    //Arquivo a ser lido
    FILE *file;
 
    //Abre o arquivo no diretório escolhid
    file = fopen("Texto.txt", "r");
 
 
    //Se o arquivo foi encontrado
    if(file){
 
        //Encontra encontra letras(até o fim do arquivo)
        while((c = getc(file)) != EOF){
 
            //Imprime na tela
            printf("%c", c);
 
            //Vetor de char recebe a letra atual
            conteudoTexto[cont] = c;
 
            //Aumenta a contagem de letras
            cont++;
 
        }
 
        //Fecha o arquivo
        fclose(file);
 
    }
 
    //Imprimindo conteúdo lido
    for(cont = 0; cont < strlen(conteudoTexto) - 2; cont++){
        printf("%c",conteudoTexto[cont] );
    }
 
    return 0;
}