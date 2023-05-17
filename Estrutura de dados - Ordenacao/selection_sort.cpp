#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

//Selection sort, funciona da seguinte maneira, ele vai comparando de 2 em 2 os elementos proximos, e procura no vetor o menor e joga ele pro começo depois dentro do vetor ele procura o proximo menor e joga depois do primeiro e assim repete

// nao e bom para lista grande


void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for (i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void selection_sort(int vetor[TAM]){
    int posicaoDoMenorValor, aux;
    int i,j;

    for (i = 0; i < TAM; i++){
        
        // recebe a posicao inicial para o menor valor
        posicaoDoMenorValor = i;

        //Analiza os elementos na frente
        for (j = i+1 ; j < TAM; j++){

            //Caso encontre um valor menor na frente dos analizados
           if(vetor[j] < vetor[posicaoDoMenorValor]){
            posicaoDoMenorValor = j;
           }
        }
        if(posicaoDoMenorValor != i){
           aux = vetor[i];
           vetor[i] = vetor[posicaoDoMenorValor];
           vetor[posicaoDoMenorValor] = aux;
        }

        imprimeVetor(vetor);    

    }
    
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    selection_sort(vetor);

    imprimeVetor(vetor);
}