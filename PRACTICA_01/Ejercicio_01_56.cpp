// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 56

// Problema planteado: . Generar (para un orden n): Sea n=5:
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << (i + j) % 2 << "\t";// Calcular y mostrar el valor 0 o 1
        }
        cout << endl;
    }
    return 0;
}
