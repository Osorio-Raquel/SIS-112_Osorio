// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 3

// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    double s = 0.0, m, p;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    for (i = 1; i <=n; ++i) 
    {
        cout << "Ingrese la nota " <<i<< ": ";
        cin>> m;
        s +=m;
    }
    p = s / n;
    cout << "El promedio de las notas es: " << p << endl;
    return 0;
}