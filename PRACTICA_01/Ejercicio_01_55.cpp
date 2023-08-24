// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 55

// Problema planteado:Generar las secuencias:
//  1 2 3 4 …………..n
//  1 2 3 4….. n-1
//  1 2 3 …...n-2
//  ……..
//  1

#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (i = n; i >= 1; i--) { // Iterar a través de las filas
        for (j = 1; j <= i; j++) { // Iterar a través de las columnas
            cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}

