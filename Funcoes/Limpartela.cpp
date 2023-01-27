#include <stdio.h>
#include <stdlib.h>
 
//funcao para limpar a tela
void limpaTela(){
    system("CLS");
}
 
int main(){
 
    //Definindo Variáveis
    int a;
 
    //Imprimindo alguma coisa
    printf("Digite um valor para 'a':");
 
    //Lendo o valor
    scanf("%d", &a);

    // laco de repeticao while
    while(a!= 0 ){
        //Chama a função que limpa a tela, vai limpar a tela ate a diferente de 0
        limpaTela();

        printf("Digite um valor");
        scanf("%d", &a);
    }
    printf("O valor digitado foi %d \nFim do Programa!", a);
 
    //Retorno da Função
    return 0;
}
