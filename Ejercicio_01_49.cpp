// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 49

// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes, el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés
// compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear es:    Cn = C0(1+I)n

#include <iostream>
using namespace std;

int main() {
    double c, i, n;
    cout << "Capital: "; cin >> c;
    cout << "Interes: "; cin >> i;
    cout << "años: "; cin >> n;
    double cn = c * (1 + i)* n;
    cout << "capital cn: " << cn << endl;
    cout << "Intereses: " << (cn - c) << endl;
    return 0;
}
