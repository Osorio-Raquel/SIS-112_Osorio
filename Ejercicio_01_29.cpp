// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 29
 
// Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”, dicha promoción consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran más de 10.
// Obtener la cantidad de dinero que una persona tiene que pagar por cada una de la llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>
using namespace std;

int main() {
    int c;
    double u, t;
    cout << "Ingrese la cantidad de llantas compradas: ";
    cin >> c;
    if (c < 5) {
        u = 300;
    } else if (c <= 10) {
        u = 250;
    } else {
        u = 200;
    }
    t = c * u;
    cout << "Costo por llanta: " << u << " Bs" << endl;
    cout << "Costo total de la compra: " << t << " Bs" << endl;
    return 0;
}
