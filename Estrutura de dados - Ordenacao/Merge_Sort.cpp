#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

//

void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for (i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void merge_sort(vetor[TAM]){
    
}


int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    merge_sort(vetor);

    imprimeVetor(vetor);
}