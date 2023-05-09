#include <stdio.h>
#include <string.h>

 //uma forma de trabalha como objetos
 //struct = estrutura
struct palavra{
    int ordem; //campos|| ordem das palavras
    char letra; // campos mostra letra
    char texto[255]; // texto String mostra texto
};
 
int main () {
 
    //Criar uma palavra
    struct palavra primeiraPalavra; // tipo que criamos
 
    //Modificando os campos
    primeiraPalavra.ordem = 10; // campos
    primeiraPalavra.letra = 'p'; // campos
    strcpy(primeiraPalavra.texto,"palavrinha"); // strcpy = string copy, copia de string

    //Mostrando valores do Struct
    printf("Ordem: %d, Primeira Letra: %c, Palavra: %s", primeiraPalavra.ordem,primeiraPalavra.letra, primeiraPalavra.texto);
 
    //Fazendo uma lista de structs
    struct palavra listaDePalavras[3]; // esta puxando a struct para fazer um vetor com 3 posicoes
 
    //Modificando os campos
    listaDePalavras[0].ordem = 0; // numero da primeira posicao da struct palavra com a variavel ordem usando o vetor
    listaDePalavras[1].ordem = 1; 
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd'; // numero da primeira letra da stuct palavra com a variavel letra usando o vetor
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';
    strcpy(listaDePalavras[0].texto,"Dahora");// numero da primeira letra da stuct palacra com a variavel texto, e usando strcpy para copiar a string usando o vetor
    strcpy(listaDePalavras[1].texto,"Legal");
    strcpy(listaDePalavras[2].texto,"Bacana");
 
    //Percorrendo o vetor para mostrar na tela
    int cont;
    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s", listaDePalavras[cont].ordem,listaDePalavras[cont].letra, listaDePalavras[cont].texto);
    }
 
    return 0;
}