#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

// funcao que parametro int numero = a 
int RetornaComMaisDez(int numero ){ // parametro numero = a = 5
    return numero + 10; // parametro numero + 10 = 5 + 10
}

// * =  conteudo apontado por endereco da memoria
void aumentaDez(int *numero){// int *numero = endereco da memoria da variavel A
    *numero = *numero + 10; // ele foi direto na memoria e mudou o valor do meu numero para *numero + 10
}

int main(){

    // definindo variavel
    int a = 5;

    // mostrando na tela variavel
    printf("\n%d", a);

    //Funcao que aumenta 10, esse e mais lento pois faz o processo de ir na funcao e fazer a conta
    a = RetornaComMaisDez(a); // o valor de A = RetornaComMaisDez pegando o valor de a de la de cima.
//  a = parametro numero + 10. 
//  numero = a =(5) 

    printf("\n%d", a);

    //funcao que aumenta 10 diretamente, esse muda o valor direto na memoria
    aumentaDez(&a); // invez de mandar o valor de a, eu envio a posicao na memoria

    printf("\n%d", a);
}