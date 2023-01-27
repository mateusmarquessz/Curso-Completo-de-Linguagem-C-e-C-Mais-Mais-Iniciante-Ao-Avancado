#include <stdio.h>
#include <stdlib.h>
 
 // vetor e ponteiro, entao para chamar um vetor precisa de um ponteiro, tamanho e igual 3 ali embaixo, so mudar o valor la embaixo
void imprimeVetor(int *vetor, int tamanho){
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++)
        printf("%d \n",vetor[i]);
 
}
 
void modificaVetor(int *vetor, int tamanho){
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++)
        vetor[i] = vetor[i] + 1;
 
}
 
 
int main(){
 
    //Definindo Vetor
    int v[3] = {1,2,3};
 
    //Mostrando vetor, esse 3 = tamanho
    imprimeVetor(v, 3);
 
    //Modifica o vetor
    modificaVetor(v, 3);
 
    //Mostrando vetor
    imprimeVetor(v, 3);
 
    //Retorno da Função
    return 0;
}