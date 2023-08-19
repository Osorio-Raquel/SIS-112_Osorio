// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 40

// Problema planteado:Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
// 5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el
// cambio a entregar empleando el menor número posible de monedas.

#include <iostream>
using namespace std;

int main() {
    double p, f, m, c;
    cout << "Ingrese el precio del articulo";
    cin >> p;
    cout << "Ingrese la cantidad entregada por el consumidor: ";
    cin >> f;
    c = f - p;
    double d[] = {5, 1, 0.5, 0.2, 0.1};
    for (double m : d) {
        int a = c / m;
        if (a > 0) {
            cout << "Monedas de " << m << " Bs: " << a << endl;
            c -= a * m;
        }
    }
    return 0;
}