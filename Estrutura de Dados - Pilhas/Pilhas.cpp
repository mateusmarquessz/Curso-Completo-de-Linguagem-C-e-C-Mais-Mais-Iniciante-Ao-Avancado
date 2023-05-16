#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std;

void imprimeVetor(int pilha[TAM], int topo){

    int i;

    printf("\n");

    //imprimindo vetor
    for (i = 0; i < TAM; i++){
        printf("%d-", pilha[i]);
    }
    printf("%d", topo);
}

//Caso a pilha esteja vazia
bool pilha_Vazia(int topo){
    if(topo == -1){
        return true;
    } else {
        return false;
    }
}

//Confere se a pilha está cheia
bool pilha_Cheia(int topo){
    if(topo == TAM -1){
        return true;
    } else {
        return false;
    }
}

int pilha_Tamanho(int topo){
    return topo +1;
}
//Retorna o ultimo valor da pilha
int pilha_get(int pilha[TAM], int *topo){
    if(pilha_Vazia(*topo)){
        cout << "A pilha esta vazia";
        return 0;
    }else{
        return pilha[*topo];
    }
}

//Adiciona um valor na pilha
int pilha_push(int pilha[TAM], int valor, int *topo){ // coloca elementos na lista
    //caso nao possa colocar mais valores
    if(pilha_Cheia(*topo)){
        cout << "Pilha cheia!";
    } else {
        *topo += 1;
        pilha[*topo] = valor;
    }
}

//Remove um valor da pilha
void pilha_pop(int pilha[TAM], int *topo){ // Remove elementos da lista

    //Verificar se a pilha ja esta vazia
    if(pilha_Vazia(*topo)){
        cout << "A pilha ja esta vazia";
    } else {
        cout << "\nValor removido:" << pilha[*topo]; // mostro o que tirei
        pilha[*topo] = 0; // serve para remover ele do vetor
        *topo -= -1;
    }
}

//Cria uma pilha e limpa ela
void pilha_construtor(int pilha[TAM], int *topo){

    *topo = -1;

    int i;
    //imprimindo vetor
    for (i = 0; i < TAM; i++){
        pilha[i] = 0;
    }
}


int main(){ 
    int pilha[TAM]; //pilha de tamanho TAM
    int topo = -1;// topo da pilha -1 por que esta vazia

    pilha_construtor(pilha, &topo);

    imprimeVetor(pilha, topo);
    if(pilha_Vazia(topo)){
        cout << "\nA pilha esta vazia";
    }

    pilha_push(pilha, 5, &topo);
    imprimeVetor(pilha, topo);
    cout << "\nUltimo valor da Pilha: " << pilha_get(pilha, &topo); 

    pilha_push(pilha, 7, &topo);
    imprimeVetor(pilha, topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 5, &topo);
    imprimeVetor(pilha, topo);

    if(pilha_Cheia(topo)){
        cout << "\nA pilha esta cheia";
    }

    pilha_pop(pilha, &topo);
    imprimeVetor(pilha, topo);

}