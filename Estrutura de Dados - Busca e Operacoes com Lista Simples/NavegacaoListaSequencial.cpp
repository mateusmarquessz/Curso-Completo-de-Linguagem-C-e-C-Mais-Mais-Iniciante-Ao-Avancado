#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 3
#include <new>


using namespace std;


//Aloca o vetor do tamanho pedido
int* alocaVetor(int tam){

    //Cria um ponteiro auxiliar
    int *v;

    //Aloca memoria para o novo vetor
    v = (int*) malloc(tam * sizeof(int));

    return v;
}



//Imprime a lista sequencial
void imprimeSequencial(int *vet, int tamanhoDaListaSequencial){
    int i;
    for (i = 0; i < tamanhoDaListaSequencial; i++){
        printf("\n Valor %d: %d", i, vet[i]);
    }
}



int main(){

    //Variaveis
    int vet[TAM] = {1,2,3}, tamanhoDaLista, i;

    for (i = 0; i < TAM; i++){
        printf("\n Valor %d: %d", i, vet[i]);
    }

    imprimeSequencial(vet, 3);

    //lendo novos valores
    for (i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }

    imprimeSequencial(vet, 3);

    cout << "\nDigite o tamanho do vetor: ";
    cin >> tamanhoDaLista;

    //Ponteiro para novo vetor
    int *vetLidoNaHora;

    //Passa o espaco da memoria que foi criado para o vetor
    vetLidoNaHora = alocaVetor(tamanhoDaLista);

    for (i = 0; i < tamanhoDaLista; i++){
        scanf("%d", &vetLidoNaHora[i]);
    }

    imprimeSequencial(vetLidoNaHora, tamanhoDaLista);

    //Criando com C++
    int *vetorEmCplusplus = new int[5];

    for (i = 0; i < tamanhoDaLista; i++){
        scanf("%d", &vetorEmCplusplus[i]);
    }
    
}