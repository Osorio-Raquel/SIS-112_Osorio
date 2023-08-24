// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 54

// Problema planteado: Hallar la raíz cuadrada de un número por aproximaciones, utilizar: http://es.wikipedia.org/wiki/C%C3%A1lculo_de_la_ra%C3%ADz_cuadrada (Algoritmo Babilónico)

#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Ingrese el numero: ";
    cin >> n;
    double x = n / 2.0;
    double e = 1e-6; //defino epsilon
    while (abs(x * x - n) > e) {
        x = 0.5 * (x + n / x);
    }
    cout << "Raiz cuadrada de " << n << " es " << x << endl;
    return 0;
}
