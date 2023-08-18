// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 18
 
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada

#include <iostream>
using namespace std;

int main() {
    double a, h, v;
    cout << "ingrese el lado de la base: ";
    cin >> a;
    cout << "Ingrese la altura: ";
    cin >> h;
    v = (a * a * h) / 3;
    cout << "El volumen de la piramide es: " << v << endl;
    return 0;
}