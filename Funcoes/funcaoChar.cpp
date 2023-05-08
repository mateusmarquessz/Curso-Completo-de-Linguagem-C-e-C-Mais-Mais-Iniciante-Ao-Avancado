#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


// funcao Char
char RetornaLetra(){ 
    //dando valor para o return de "x"
    return 'x';
}
int main(){

    // Definindo variavel
    char letra;

    // variavel char = funcao
    letra = RetornaLetra();

    //Imprimindo  novo valor;

    printf("%c", letra);
}