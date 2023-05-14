#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;

void limpaTela(){
    system("CLS");
}

int main (){
    int a = 10;

    char palavra[3];
    palavra[0] = 'a';//c
    palavra[1] = 'b';//c
    palavra[2] = 'c';//c

    printf("%c %c %c", palavra[0], palavra[1], palavra[2]); //C puro

    printf("%d", a); //C puro

    //limpaTela();
    string outraPalavra = "gol"; //C++ 
    cout << outraPalavra;//C++
    cout << "\n O valor de " << a << "eh maior que 9";//C++
}