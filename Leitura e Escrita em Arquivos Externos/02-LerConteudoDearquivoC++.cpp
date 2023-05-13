#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //Dizer qual arquivo vai ser lido
    ifstream input("Texto.txt");

    //String que recebera o texto lido
    string textoLido;

    //Passando o texto do arquivo para string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrando conteuro
    cout << textoLido;
    return 0;
}
