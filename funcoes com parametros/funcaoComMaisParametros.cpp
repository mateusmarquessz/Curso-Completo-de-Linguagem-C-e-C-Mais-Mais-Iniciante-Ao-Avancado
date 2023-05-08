#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

// funcao para fazer calculo de uma soma, com parametro num1 e num2
void Mostrasoma(int num1, int num2){ // parametro num1 = a, num2 = b; puxando valor la da main

    printf("\n a soma entre %d e %d eh %d", num1, num2, num1 + num2); // soma de a + b, no caso com parametros num1 e num2
}
// funcao para retornar a soma, mas sem mostrar na tela, usando os parametro num1 = a, e num2 = b
int retornaSoma(int num1, int num2){
    return num1 + num2;
}
int main(){
    int a, b;

    a = 5;
    b = 7;

    //funcao que pede valor de a e b e mostra a soma, entre a e b;
    Mostrasoma(a, b); // (a, b) pedindo o valor das variaveis para a funcao Mostrasoma

    //Usando a funcao retornaSoma para mostrar na tela o resultado, nesse caso a soma e feita na funcao e so retorna o resultado final
    printf("\n a soma entre %d e %d eh %d", a, b, retornaSoma(a, b));

}