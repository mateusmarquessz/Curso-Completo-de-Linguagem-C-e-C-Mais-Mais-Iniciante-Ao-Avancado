#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    //variavel
    int a = 20; // existe um endereco esse processo 

    //imprimindo o valor de uma variavel
    printf("Valor de a: %d \n", a);
    // a diferenca de uma variavel e de um ponteiro, e que uma varivel esta em um endereco de memoria armazenando um valor, e os ponteiros eles armazenam posicoes da memoria
    printf("Endereco de a: %d \n", &a);

    //Variaveis armazenam valores
    int b = 10;

    //ponteiros armazem posicoes na memoria
    int *ponteiro;

    //Ponteiro recebendo a posicao na memoria da variavel b
    ponteiro = &b;

    //Imprimindo o valor de uma variavel
    printf("Valor de b: %d \n", b);

    //* pode ser lido como "Conteudo apontado por "

    *ponteiro = 40;

    printf("Valor de b: %d ", b); 


    // Variavel
    //[Valor que armazena]
    //[Posicao na memoria]

    //Ponteiro
    //[Posicao da memoria que esta armazenando]
    //[Posicao na memoria]
    return 0;
}
