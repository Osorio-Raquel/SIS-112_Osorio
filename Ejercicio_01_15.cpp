// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: ##/08/2023

// Número de ejericio: 15

// Problema planteado: Escriba la sucesión de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "ingrese la cantidad de terminos que desea:";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}