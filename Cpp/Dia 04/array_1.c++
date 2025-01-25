// Crie um programa que leia 5 números inteiros e armazene-os em um array. Depois, exiba os números em ordem inversa.
#include <iostream>
using namespace std;

int main() 
{
    int numeros[5] = {};
    int i = 0;
    for (i= 0; i < 5; i++)
    {
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }
        for (i = 4; i >= 0; i--)
        {
            cout << "numero: " << numeros[i]<< endl;
        }
}