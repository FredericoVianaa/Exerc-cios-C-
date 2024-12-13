#include <iostream>

using namespace std;

// Escreva um programa que leia a idade de uma pessoa e exiba se ela pode votar (idade maior ou igual a 16 anos) ou se não pode votar (menor que 16 anos).
int main() 
{
    int idade;
    cout << "Qual sua idade? ";
    cin >> idade;

    if (idade >= 16) 
    {
        cout << "Parabens, voce pode votar!";
    }
    else
    {
        cout << "Voce infelizmente nao pode votar ainda";
    }
    return 0;
}
