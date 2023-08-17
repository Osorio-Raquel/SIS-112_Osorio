// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 1

// Problema planteado: Área de un triángulo 

#include <iostream>
using namespace std;

int main() 
{
    double b, a, area;
    cout << "Ingrese la base del triangulo: ";
    cin >> b;
    cout << "Ingrese la altura del triangulo: ";
    cin >> a;
    area = 0.5 * b * a;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
