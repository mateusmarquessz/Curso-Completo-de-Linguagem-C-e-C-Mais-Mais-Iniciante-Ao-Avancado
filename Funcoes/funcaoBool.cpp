#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <stdbool.h>

// definindo funcao Bool
bool retornaBool(){

    //Dando valor para a funcao
    return true;
}


int main(){

    // definindo variavel
    bool variavelBool;

    // dando o valor da variavel
    variavelBool = retornaBool();


    printf("%d", variavelBool);
    //retorno da funcao
    return 0;
}