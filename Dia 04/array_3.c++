// Crie um programa que leia 3 nomes e os armazene em um array de strings. Depois, exiba os nomes na mesma ordem em que foram digitados.
#include <iostream>

using namespace std;

int main()
{
    string nome[3] = {};
    int i;

    for (i = 0; i < 3 ; i++)
    {
        cout << "Digite seu nome: ";
        cin >> nome[i];
    }
    for (i = 0; i < 3 ; i++)
    {
        cout << "nome " << i + 1 << ": "<< "" << nome[i] << endl;
    }
    return 0;
}