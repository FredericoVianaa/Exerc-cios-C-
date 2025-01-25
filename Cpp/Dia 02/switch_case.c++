//Faça um programa que leia um número de 1 a 7 e exiba o nome do dia da semana correspondente. Use o switch para resolver este exercício.
#include <iostream>

using namespace std;

int main()
{
    int num; 
    cout << "Digite um numero: ";
    cin >> num; 
    
    switch (num)
    {
    case 1:
        cout << "Segunda-feira";
        break;
    
    case 2:
        cout << "Terca-feira";
        break;

    case 3:
        cout << "Quarta-feira";
        break;

    case 4:
        cout << "Quinta-feira";
        break;

    case 5:
        cout << "Sexta-feira";
        break;

    default:
        break;
    }
    return 0;
}