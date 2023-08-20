// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023
 
// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
using namespace std;

int main() 
{
    double c, k;
    cout << "Ingrese la temperatura en grados celsius: ";
    cin>> c;
    k = c+273.15; //calcula los grados en kelvin
    cout << "La temperatura en kelvin es: " << k << endl;
    return 0;
}