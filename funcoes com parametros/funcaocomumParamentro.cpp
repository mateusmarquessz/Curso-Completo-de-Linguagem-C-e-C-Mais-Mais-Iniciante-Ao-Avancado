#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

 //ela recebe como paramento um int= inteiro

//funcao void, retorna nada, esta mostrando na tela o Sucessor de A. O paramentro numero esta valendo A
void mostraSucessor(int numero){ // int numero recebeu valor de a.
    printf("\nO sucessor de %d eh %d", numero, numero+1);// numero = a, numero = a +1
}

//funcao inteira, retorna o antecessor de A. O paramentro numero esta valendo A. Nao ha problema em usar o mesmo nome para o parametro
int retornaAntecessor(int numero){ // int numero recebeu valor de a.
    return printf("\nO antecessor de %d eh %d", numero, numero-1); // numero = a, numero = a -1
}

int main(){
    //definindo variaveis
    int a;


    printf("Digite um valor");
    scanf("%d", &a);

    //chama funcao para mostrar o sucessor de A
     mostraSucessor(a); // (a) pedindo valor de A para o parametro mostraSucessor, no caso o int(int numero)

    //chama funcao para mostar o antecessor de A
    retornaAntecessor(a); // (a) pedindo valor de A para o parametro mostraAntecessor, no caso o int(int numero)

}