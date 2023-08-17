// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 7

// Problema planteado: Número amigo

#include <iostream>
using namespace std;

int s(int m) // establezco una funcion para sumar sus divisores
{
    int su = 0, i;
    for (i = 1; i <= m / 2; ++i) {
        if (m % i == 0) {
            su += i;
        }
    }
    return su;
}
int main() 
{
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (s(a) == b and s(b) == a)
       cout << "Son numeros amigos";
    else
        cout << "No son numeros amigos";
    return 0;
}