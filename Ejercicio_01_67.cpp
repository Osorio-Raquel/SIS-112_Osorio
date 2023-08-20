// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 67

// Problema planteado: Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman un número primo, de ser así imprima el mensaje respectivo.

#include <iostream>
using namespace std;

bool e(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int n, s = 0;
    cin >> n;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    if (s != 0 and e(s))// usa la funcion para determinar si es primo
        cout << "La suma es un numero primo." << endl;
    else
        cout << "La suma no es un numero primo." << endl;
    return 0;
}
