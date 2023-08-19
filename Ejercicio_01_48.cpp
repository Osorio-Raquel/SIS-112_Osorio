// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 48

// Problema planteado:Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.

#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            c++;
        }
    }
    cout << "Cantidad de numeros pares en el rango es " << c << endl;
    return 0;
}