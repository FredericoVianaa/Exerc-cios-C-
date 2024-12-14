//Escreva uma função que receba dois números inteiros e retorne o maior deles.
#include <iostream>

using namespace std;


int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
    int a, b, maior_num;

    cout << "Digite um numero: ";
    cin >> a;

    cout <<"Digite outro numero: ";
    cin >> b;

    maior_num = maior(a, b);
    cout << "O maior numero e: " << maior_num << endl;
    return 0;
}

