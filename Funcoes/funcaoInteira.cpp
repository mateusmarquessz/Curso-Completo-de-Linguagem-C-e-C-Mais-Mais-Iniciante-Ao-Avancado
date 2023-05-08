#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

//funcao que retorna um determinado valor

int retornaDez(){
    int numero = 100; // A vai receber o valor de numero que eh = 100 

    //fazendo operacoes com o return
    return numero + 4; // somando a variavel A com o return
    // A = numero + 4
}

//Retorna um numero com virgula

double retornaQuebrado(){
    return 5.5;
}



int main(){
    //Definindo varivavel
    int a;
    double b;

//Passando o retorno de uma funcao para uma variavel

    //inves de fazer a = 10; faca
    a = retornaDez();
    b = retornaQuebrado();

    //Imprimindo valor de A

    printf("%i", a); // mostrando na tela o valor de A, que foi modificado pela a funcao retornaDez
    printf("\n%f", b); // mostrando na tela o valor de B, que foi modificado pela a funcao retornaQuebrado
    //Imprimindo na tela
}