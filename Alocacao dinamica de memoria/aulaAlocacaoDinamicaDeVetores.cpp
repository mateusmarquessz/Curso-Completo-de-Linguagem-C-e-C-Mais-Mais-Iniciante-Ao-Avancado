#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int* alocaVetor(int tamanho){

    //criando um ponteiro auxiliar
    int *aux;
    //alocacao dinamica de memoria, malloc, sizeof pega o tamanho da memoria no caso de int
    aux = (int*) malloc(tamanho * sizeof(int));
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}


int main(){

    // definindo variaveis
    int *vetor,i, tamanho;

    //lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //colocando valores no vetor
 for (i = 0; i < tamanho; i++)
    {
        vetor[i] = 90;
    }

    //imprimindo vetor
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
    //limpando memoria
    free(vetor);
    return 0;
}