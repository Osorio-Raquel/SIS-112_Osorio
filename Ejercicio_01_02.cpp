// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 2

// Problema planteado: Volumen de una esfera 

#include <iostream>
using namespace std;

int main() 
{
    double r, v;
    cout << "Ingrese el radio de la esfera: ";
    cin >> r;
    v = (4.0 / 3.0)*3.14159*r*r*r;
    cout << "El volumen de la esfera es: " << v << endl;
    return 0;
}