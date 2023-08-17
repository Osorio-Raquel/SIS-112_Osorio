// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 14

// Problema planteado: Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.

#include <iostream>
using namespace std;

int main() {
    int n, s = 0, c = 0;
    do {
        cin >> n;
        s += n;
        ++c;
    } 
    while (n != 0);
    double p = static_cast<double>(s) / (c - 1);//convierte el valor de la variable s en un tipo double y (contador - 1) se utiliza para dividir por la cantidad correcta de valores
    cout << "suma: " << s << endl;
    cout << "promedio: " << p << endl;
    return 0;
}