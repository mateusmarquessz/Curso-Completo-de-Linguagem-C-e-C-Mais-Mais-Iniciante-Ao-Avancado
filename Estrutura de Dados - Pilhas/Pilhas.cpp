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

int pilha_push(int pilha[TAM], int valor, int *topo){ // coloca elementos na lista
    //caso nao possa colocar mais valores
    if(*topo == TAM -1){
        cout << "Pilha cheia!";
    } else {
        *topo += 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo){ // Remove elementos da lista

    //Verificar se a pilha ja esta vazia
    if(*topo == -1){
        cout << "A pilha ja esta vazia";
    } else {
        cout << "\nValor removido:" << pilha[*topo]; // mostro o que tirei
        pilha[*topo] = 0; // serve para remover ele do vetor
        *topo -= -1;
    }


}


int main(){ 
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0}; //pinha de tamanho TAM
    int topo = -1, valorRetirado; // topo da pilha -1 por que esta vazia
    imprimeVetor(pilha);

    pilha_push(pilha, 5, &topo);
    imprimeVetor(pilha);
    pilha_push(pilha, 7, &topo);
    imprimeVetor(pilha);
    pilha_push(pilha, 5, &topo);
    imprimeVetor(pilha);
    pilha_pop(pilha, &topo);
    imprimeVetor(pilha);

}