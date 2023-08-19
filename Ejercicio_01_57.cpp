// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 57

// Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int s = sqrt(i);
        if (s * s == i) {
            cout << i << " es un cuadrado perfecto :D" << endl;
        }
    }
    return 0;
}
