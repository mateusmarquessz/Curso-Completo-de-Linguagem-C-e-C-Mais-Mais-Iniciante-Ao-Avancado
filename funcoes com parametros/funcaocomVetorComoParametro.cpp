#include <stdio.h>
#include <stdlib.h>
 
 // vetor sempre precisa de um ponteiro
 // ponteiro serve para acharmos a primeira casa do vetor
void imprimeVetor(int *vetor, int tamanho){ //  int *vetor = v na primeira posicao , int tamanho = 3 que foi definindo la embaixo, porem pode ser modificado;
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++) // tamanho igual posicao definida na main no caso 3
        printf("%d \n",vetor[i]); // mostrando oq esta dentro do vetor
 
}
 
void modificaVetor(int *vetor, int tamanho){
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++)
        vetor[i] = vetor[i] + 1; // aumentando mais 1 no vetor
 
}
 
 
int main(){
 
    //Definindo Vetor
    int v[3] = {1,2,3};
 
    //Mostrando vetor, 3 = parametro tamanho, que pode ser modificado 
    imprimeVetor(v, 3);
 
    //Modifica o vetor, 3 = parametro tamanho, que pode ser modificado 
    modificaVetor(v, 3);
 
    //Mostrando na tela o vetor modificado
    imprimeVetor(v, 3);
 
    //Retorno da Função
    return 0;
}