// Faça um programa que leia números inteiros do usuário até que ele digite 0. Use um laço while e mostre a soma de todos os números digitados.
#include <iostream>

using namespace std;

int main() 
{
    int num, 
    num_anterior = 0,
    soma = 0;

    while (num != 0)
    {
        cout << "Digite um numero: "; 
        cin >> num;
        soma = soma+num_anterior;
        num_anterior = num;
    }    
    cout << "a soma dos numeros digitados e: " << soma << "\n";

    return 0;
    }