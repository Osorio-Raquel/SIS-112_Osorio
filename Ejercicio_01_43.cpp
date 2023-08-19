// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 43

// Problema planteado: Obtener el promedio de números enteros positivos introducidos por teclado, el algoritmo se detiene cuando se lea un número negativo o cero.

#include <iostream>
using namespace std;

int main() {
    int n, s = 0, c = 0;
    while (cout << "Ingrese un numero entero positivo o un numero negativo/0 para detener: " and cin >> n and n > 0) {
        s += n;
        c++;
    }
    if (c > 0) {
        cout << "El promedio de los numeros ingresados es: " << static_cast<double>(s) / c << endl;
    } else {
        cout << "No se ingresaron números validos." << endl;
    }
    return 0;
}