#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

// funcao para fazer calculo de uma soma, com parametro num1 e num2
void Mostrasoma(int num1, int num2){

    printf("\n a soma entre %d e %d eh %d", num1, num2, num1 + num2);
}

int retornaSoma(int num1, int num2){
    return num1 + num2;
}
int main(){
    int a, b;

    a = 5;
    b = 7;

    //funcao que mostra a soma, entre a e b;
    Mostrasoma(a, b);

    //Funcao que exibe o resultado da soma de a e b;
    printf("\n a soma entre %d e %d eh %d", a, b, retornaSoma(a, b));

}