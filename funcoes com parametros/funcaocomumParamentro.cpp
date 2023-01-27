#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

                    //ela recebe como paramento um int= inteiro
void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero+1);
}

int retornaAntecessor(int numero){
    printf("\nO antecessor de %d eh %d", numero, numero-1);
}
int main(){
    //definindo variaveis
    int a;

    printf("Digite um valor");
    scanf("%d", &a);

    //chama funcao para mostrar o sucessor de A
     mostraSucessor(a);

    //chama funcao para mostar o antecessor de A
    retornaAntecessor(a);

}