#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
//para que usar funcoes? Toda vez que precisarmos usar uma comando varias vezes.

//criando funcao sem retorno
void DesenhaBorda(){
    printf("aaaaaaaaaaaaaaaaaaaaaaaaa\n");
}

//Quando eu chamo a funcao, ela vai na funcao e retorna oq tem que fazer, que no caso e o printf

int main(){
    DesenhaBorda(); // chamando a funcao
    printf("hi\n");
    DesenhaBorda(); // chamando a funcao
return 0;
}