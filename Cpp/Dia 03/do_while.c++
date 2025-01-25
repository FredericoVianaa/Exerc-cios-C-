// Crie um programa que use um laço do-while para pedir uma senha ao usuário. O programa só deve terminar quando a senha correta for digitada (1234).
#include <iostream>

using namespace std;

int main()
{
    int senha;
    do 
    {
        cout << "Digite sua senha: ";
        cin >> senha;
        if (senha != 1234) 
        {
            cout << "Senha invalida invalido! Tente novamente.\n";
        }
    }
    while (senha != 1234);
    {
        cout << "Parabens, senha correta";
    }
}