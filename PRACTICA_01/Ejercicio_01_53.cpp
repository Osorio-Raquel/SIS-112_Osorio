// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 53

// Problema planteado: . Escriba un programa que permita al usuario obtener los valores de las funciones trigonométricas:

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "Angulo en grados: ";
    cin >> a;
    double r = a * M_PI / 180.0; // usando M_PI para definir el valor de pi
    cout << "Seno: " << sin(r) << endl;
    cout << "Coseno: " << cos(r) << endl;
    cout << "Tangente: " << tan(r) << endl;
    return 0;
}