#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
     //Tamanho a ser criado
    int numeroLinhas, numeroColunas, i, j;
 
    //Lendo o tamanho do vetor
    cout << "Digite o tamanho de linhas:\n";
    cin >> numeroLinhas;
    cout << "Digite o tamanho de colunas:\n";
    cin >> numeroColunas;
 
    //Mostrando o tamanho lido
    cout << "Tamanho de Linhas:" << numeroLinhas << "\n";
    cout << "Tamanho de Colunas:" << numeroColunas << "\n";
 
    //Ponteiro de Ponteiro para Matriz
    int **matriz;
 
    //Matriz de ponteiro para ponteiros
    matriz = (int **) new int[numeroLinhas];
 
    //Alocando memória para cada coluna
    for ( i =0; i < numeroLinhas ; i ++)
        matriz[i] = (int *)  new int[numeroColunas];
 
    //Imprimindo a matriz
    for(i = 0; i < numeroLinhas; i++){
         for(j = 0; j < numeroColunas; j++){
            matriz[i][j] = i;
            printf("%d ",matriz[i][j]);
         }
         printf("\n");
    }
 
    return 0;
}