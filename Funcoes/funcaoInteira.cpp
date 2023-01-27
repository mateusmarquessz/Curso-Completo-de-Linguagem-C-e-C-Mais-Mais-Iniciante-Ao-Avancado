#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

// Definindo que a funcao existe.
int retornaDez();
double retornaQuebrado();

int main(){
    //Definindo varivavel
    int a;
    double b;
//Passando o retorno de uma funcao para uma variavel

    //inves de fazer a = 10; faca
    b = retornaQuebrado();
    a = retornaDez();

    //Imprimindo valor de A

    printf("%i", a);
    printf("\n%f", b);
    //Imprimindo na tela
    printf("\nhi");
}

//funcao que retorna um determinado valor
int retornaDez(){
    printf("\n Estudando\n");
    //Definindo valor de return, do tipo inteiro.
    int numero = 100;
    //fazendo operacoes com o return
    //Tem que ser inteiro
    return numero + 4;
}

//Retorna um numero com virgula

double retornaQuebrado(){
    return 5.5;
}