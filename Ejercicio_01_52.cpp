// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 52

// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o negativos.

#include <iostream>
using namespace std;

int pot(int x, int y) {
    int r = 1;
    for (int i = 0; i < abs(y); i++) r *= x;
    return (y < 0) ? 1 / r : r;
}
int main() {
    int base, exponente;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> exponente;
    cout << "resultado: " << pot(base, exponente) << endl;
    return 0;
}
