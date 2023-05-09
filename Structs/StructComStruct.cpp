#include <stdio.h>
#include <string.h>

typedef struct Data{ // typedef = Serve para nao precisar ficar escrevendo dentro de outra struct os atributos
    int dia;
    int mes;
    int ano;
}Data;


struct Aluno{
    int id;
    Data nascimento; // referente aos typedef Data

};


int main(){

    //Criando um Aluno
    struct Aluno aluno1;
    
    //Modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 1996;
    aluno1.nascimento.mes = 1;
    aluno1.nascimento.dia = 17;

    //imprimindo valores
    printf("Nascido em: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}