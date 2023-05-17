#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std;

void imprimeVetor(int vetor[TAM], int tamanho){
 
    //Auxiliar contador
    int cont;
 
    cout << "\n";
 
     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}


void fila_construtor(int *frente, int *tras){
    *frente = 0; // ninguem na fila
    *tras = -1; // indica que nao ha espaco entre os dois
}

bool fila_vazia(int frente, int tras){
    if(frente > tras){
        return true;
    } else {
        return false;
    }
}

bool fila_cheia(int tras){

    if(tras == TAM -1){
        return true;
    } else {
        return false;
    }

}

void fila_enfileirar(int fila[TAM], int valor, int *tras){

    if(*tras == TAM -1){
        cout << "Fila Cheia";
    } else {
        *tras = *tras + 1;
        fila[*tras] = valor; //fila na posicao tras recebe um novo valor
    }

}

void fila_desenfileirar(int fila[10],int *frente,int tras){

    if(fila_vazia(*frente, tras)){
        cout << "Fila Vazia";
    } else {
         cout << "O valor " << fila[*frente] << " foi removido";
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}


int fila_tamanho(int tras, int frente){
    return (tras - frente) + 1;
}


int main(){

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente,tras;
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras); // aumentar 1 na parte de tras e colocar o valor nesse local que acabou de aumentar
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 2, &tras);

    fila_desenfileirar(fila, &frente, tras);

    fila_enfileirar(fila, 43, &tras);

    imprimeVetor(fila, fila_tamanho(tras,frente));
}