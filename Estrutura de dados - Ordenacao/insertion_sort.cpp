#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

//Insertion_Sort, funciona como a organizaçao de um baralho, tem a primeira carta de valor 6, caso apareca um 3 ele vai para atras do 6, e se aparecer um 2, ele vai para atras do 6 e 3, e assim por diante! Porem caso apareça um numero maior que 6 esse numero fica na frente do 6!


void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for (i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}


void insertion_sort(int vetor[TAM]){

    int i, j, atual;

    for (i = 1; i < TAM; i++){

        //elemento atual em analize
        atual = vetor[i];

        //elemento anterior ao analizado
        j = i -1;

            // analizando membros anterios
            while( (j >= 0) && (atual < vetor[j]) ){

                //Posicao os elementos uma posicao para frente
                vetor[j +1] = vetor[j];

                //Faz o J andar para tras
                j -= 1;
            }

        //Agora colocamos o atual (Menor numero) na posicao correta
        vetor[j + 1] = atual;

        // mostra passo a passo do que o algoritmo fez
        imprimeVetor(vetor);
    }
    

}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    insertion_sort(vetor);

    imprimeVetor(vetor);
}