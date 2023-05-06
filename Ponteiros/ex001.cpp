#include <bits/stdc++.h>

using namespace std;

int main(){
    //variavel
    int a = 20; // existe um endereco esse processo 

    //imprimindo o valor de uma variavel
    cout << "Valor de a: " << a << endl;
    // a diferenca de uma variavel e um ponteiro, e que uma varivel estao em um endereco de memoria armazenando um valor, e os ponteiros eles armazenam posicoes da memoria

    //Lendo variaveis
    cin >> a;

    printf("Endereco de a: \n", a);
    
    //Variaveis armazenam valores
    int b = 10;

    //ponteiros armazem posicoes na memoria
    int *ponteiro;

    //Ponteiro recebendo a posicao na memoria da variavel b
    ponteiro = &b;

    cout << "Valor de a: " << b << endl;

    //* pode ser lido como "Conteudo apontado por "

    *ponteiro = 40;

    cout << "Valor de b: " << b<< endl;


    // Variavel
    //[Valor que armazena]
    //[Posicao na memoria]

    //Ponteiro
    //[Posicao da memoria que esta armazenando]
    //[Posicao na memoria]
    return 0;
}
