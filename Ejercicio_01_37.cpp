// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 37

// Problema planteado: Obtenga el factorial de un número entero sin emplear el producto.

#include <iostream>
using namespace std;

int main() {
    int n, r = 1, c = 1;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    while (c <= n) { // multiplicaciones sucesivas c aumenta el valor hasta n 
        r *= c;
        c++;
    }
    cout << "El factorial de " << n << " es: " << r << endl;
    return 0;
}