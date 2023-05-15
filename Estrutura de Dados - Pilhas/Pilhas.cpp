#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std;

void imprimeVetor(int pilha[TAM]){

    int i;
    //imprimindo vetor
    printf("\n");
    for (i = 0; i < TAM; i++){
        printf("%d-", pilha[i]);
    }
}

int pilha_push(int pilha[TAM], int valor, int *topo){
    //caso nao possa colocar mais valores
    if(*topo == TAM -1){
        cout << "Pilha cheia!";
    } else {
        *topo += 1;
        pilha[*topo] = valor;
    }
}

int main(){ 
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0}; //pinha de tamanho TAM
    int topo = -1; // topo da pilha
    imprimeVetor(pilha);

    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);

    imprimeVetor(pilha);

}