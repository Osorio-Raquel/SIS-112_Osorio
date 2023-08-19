// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 32

// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, d;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    while (n > 0) {
        d = n % 10;
        i = i * 10 + d;
        n /= 10;
    }
    cout << "Numero con cifras al revés: " << i << endl;
    return 0;
}