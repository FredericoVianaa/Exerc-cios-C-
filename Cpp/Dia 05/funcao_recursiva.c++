// Implemente uma função recursiva para calcular o fatorial de um número.
#include <iostream>

using namespace std;

int fatorial (int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial (n - 1);
}

int main()
{
    int num;
    cout << "digite um numero: ";
    cin >> num;
    cout << "O calculo fatorial de " << num << " e igual a: " << fatorial(num);
}