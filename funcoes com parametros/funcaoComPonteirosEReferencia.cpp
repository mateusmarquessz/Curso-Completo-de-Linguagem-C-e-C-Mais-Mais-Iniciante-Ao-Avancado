#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int RetornaComMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){

    int a = 5;

    printf("\n%d", a);

    //Funcao que aumenta 10, esse e mais lento pois faz o processo de ir na funcao e fazer a conta
    a = RetornaComMaisDez(a);

    printf("\n%d", a);

    //funcao que aumenta 10 diretamente, esse muda o valor direto na memoria
    aumentaDez(&a);

    printf("\n%d", a);
}