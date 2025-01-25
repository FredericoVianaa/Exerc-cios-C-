#include <iostream>

using namespace std; 

int main() 
{
    int a,b;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;

    cout << "soma: " << a+b << "\nsubtracao: " << a-b << "\nmultiplicacao: " << a*b << "\ndivisao: " << a/b; 
    return 0;
}