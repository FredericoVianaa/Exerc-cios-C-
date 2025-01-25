//Crie uma função que calcule a média de três notas e retorne o resultado. Depois, no main, informe se o aluno está aprovado (média ≥ 6).
#include <iostream>

using namespace std;

int media_f (int a, int b, int c)
{   
    int resultado;
    resultado = (a + b + c)/3 ;
    return resultado;
}

int main()
{   
    int a, b, c;
    cout << "Digite a primeira nota: ";
    cin >> a;
    cout << "Digite a segunda nota: ";
    cin >> b;
    cout << "Digite a terceira nota: ";
    cin >> c;

    int media = media_f(a, b, c);
    if (media >= 6)
    {
        cout << "Aluno aprovado \n";
        cout << "media = " << media << endl;
    }
    else 
    {
        cout << "Aluno reprovado \n";
        cout << "media = " << media << endl;
    }
}