// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 45

// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.

#include <iostream>
using namespace std;

bool e(int n) { //funcion para numero primos
    int i;
    if (n <= 1) return false;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main() {
    int s = 0, i;
    for (i = 4; i <= 100; i++) {
        if (e(i)) {
            s += i * i;
        }
    }
    cout << "La suma de los cuadrados de los primeros 100 numeros compuestos es: " << s << endl;
    return 0;
}