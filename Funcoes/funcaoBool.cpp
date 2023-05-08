#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <stdbool.h>

// definindo funcao Bool
bool retornaBool(){

    //Dando valor para return da funcao no caso true
    return true;
}


int main(){

    // definindo variavel
    bool variavelBool;

    // dando o valor da variavel = funcao
    variavelBool = retornaBool();


    printf("%d", variavelBool);
    //retorno da funcao
    return 0;
}