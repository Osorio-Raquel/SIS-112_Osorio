// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 28
 
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "ingrese los numeros: " << endl;
    cin >> a >> b;
    int r = 0;
    for (int i = 0; i < b; ++i){ //un blucle epara sumar sucesivamente
            r+=a;
            }
    cout << "el resultado es " << r << endl;
    return 0;
}