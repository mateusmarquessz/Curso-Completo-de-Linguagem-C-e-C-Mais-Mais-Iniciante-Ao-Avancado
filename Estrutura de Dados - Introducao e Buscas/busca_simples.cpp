#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
#define TAM 10 // a constante TAM vale 10

using namespace std; // para utilizar cout


void imprimeVetor(int vet[TAM]){

     int i;
    //imprimindo vetor
    for (i = 0; i < TAM; i++){
        printf("%d-", vet[i]);
    }
}

int buscaSimples(int vet[TAM], int valorProcurado, int *posicaoEncontrada){

    int i;
    bool valorEncontrado;

    //percorre a lista em busca do valor
    for (i = 0; i < TAM; i++){
        if(vet[i] == valorProcurado){
            valorEncontrado = true;
            *posicaoEncontrada = i;
        }
    }

    if(valorEncontrado){
        return 1;
    } else{
        return -1;
    }
}



int main(){

    int vet[TAM] = {1,32,45,53,64,13,73,5,7,10}; // vetor com as posicoes definicas
    int valorProcurado; // valor que vai ser procurado no vetor
    int posicaoEncontrada; // posicao do valor procurado


    imprimeVetor(vet);

    printf(" \nQual numero deseja escontrar?");
    scanf("%d", &valorProcurado);

    if(buscaSimples(vet, valorProcurado, &posicaoEncontrada) == 1){
        printf("O valor foi encontrado na posicao: %i",posicaoEncontrada);
    } else {
        printf("O valor nao foi encontrado");
    }

    return 0;
}