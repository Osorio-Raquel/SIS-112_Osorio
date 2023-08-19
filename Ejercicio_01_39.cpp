// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 39

// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que si el primer número es mayor al segundo, genere una serie descendente, caso
// contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el primer numero: ";
    cin >> n;
    cout << "Ingrese el segundo numero: ";
    cin >> m;
    if (n > m) {
        while (n >= m) {
            cout << n << " ";
            n--;
        }
    } else {
        while (n <= m) {
            cout << n << " ";
            n++;
        }
    }
    cout << endl;
    return 0;
}
