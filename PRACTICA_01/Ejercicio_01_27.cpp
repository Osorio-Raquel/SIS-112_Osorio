// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 27
 
// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número.
// Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>
#include<stdlib.h>
using namespace std;

int s(int m) //funcion para hallar la suma de sus divisores (usada en numero amigo tambien)
{
    int su = 0, i;
    for (i = 1; i <= m / 2; ++i) {
        if (m % i == 0) {
            su += i;
        }
    }
    return su;
}
int main() {
    int a;
    cout << "Ingresa el numero" << endl;
    cin >> a;
    if (s(a) == a)
        cout << "es un numero perfecto";
    else
        cout << "No es un numero perfecto";

    return 0;
}