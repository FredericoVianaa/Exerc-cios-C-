// Escreva um programa que use um laço for para imprimir os números de 1 a 10.
#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Numero: " << num << endl;
        num = num + 1;
    }
    return 0;
}