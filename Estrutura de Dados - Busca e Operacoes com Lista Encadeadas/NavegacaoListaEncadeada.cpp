#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <new>;
using namespace std;

struct estrutura{
    int valorNumerico;
    struct estrutura *proximo;
};

int main(){

    //Cria o inicio da Lista
    estrutura *ponteiroEncadeada;

    //Cria um novo valor
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->valorNumerico = 13;
    novoPrimeiroValor->proximo = NULL;

    //faz o ponteiro da encada apontar para o primeiro valor
    ponteiroEncadeada = novoPrimeiroValor;

    //Cria um segundo valor
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->valorNumerico = 20;
    novoSegundoValor->proximo = NULL;

    //Junta os valores com um encadeamento
    ponteiroEncadeada-> proximo = novoSegundoValor;

    while(ponteiroEncadeada != NULL){

        cout << "\nValor: " << ponteiroEncadeada->valorNumerico;

        ponteiroEncadeada = ponteiroEncadeada->proximo; 
    }
    return 0;
}