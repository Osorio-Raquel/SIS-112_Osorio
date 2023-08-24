// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 69

// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir de la relación de Newton.

#include <iostream>
using namespace std;

int main() {
    int n, k, i, c = 1;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Ingrese k: ";
    cin >> k;
    for (i = 0; i < k; i++) {
        c = c * (n - i) / (i + 1); // Calcula el coeficiente binomial utilizando la relaci¿on de Newton
    }
    cout << "Coeficiente binomial (" << n << ", " << k << ") = " << c << endl;
    return 0;
}