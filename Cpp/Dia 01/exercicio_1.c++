#include <iostream>

using namespace std;

int main() 
{
    string nome;
    int idade;
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Ola "<< nome << "! Voce tem " << idade << " anos";
    return 0;
}