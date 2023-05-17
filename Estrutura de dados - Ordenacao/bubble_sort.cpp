#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

// Bubble sort, funciona com comparacoes de pares, e inverte da esquerda pra direita caso o da esquerda seja maior, senao ele pula para o proximo e repete o passo a passo!

// primeira posicao analizada x, e a segunda y
// crio um auxiliar para receber o valor que esta no X, e depois receber o valor que esta no Y, e depois a proxima posicao recebe o auxiliar
void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for (i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}
//funcao bubble_sort
void bubble_sort(int vetor[TAM]){
    
    int x, y, aux;
    // Valor da esquerda sendo analixado
    for (x = 0; x < TAM; x++){ // X primeira posicao
    // valor da direita sendo analizado
        for (y = x+1; y < TAM; y++){ //Y segunda posicao
            //confere se precisa fazer a troca

            imprimeVetor(vetor);

            if(vetor[x] > vetor [y]){ //verifica se X e maior que Y
                aux =  vetor[x];    //valor de X vai para Aux
                vetor[x] = vetor [y]; // valor de y vai para X
                vetor[y] = aux; //Valor de X vai para y
                //assim faz a comparacao do vetor e organizacao dele
            }
        }
    }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    bubble_sort(vetor);

    imprimeVetor(vetor);
}