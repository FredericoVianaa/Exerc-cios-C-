//Faça um programa que peça ao usuário para digitar seu nome completo e depois exiba o número de caracteres do nome.
#include <iostream>

using namespace std;

int main()
{
    string nome = "";
    cout << "Qual o seu nome completo? ";
    getline(cin,nome);

    cout << "Seu nome tem " << nome.length() << " letras" << endl;
    return 0;
}