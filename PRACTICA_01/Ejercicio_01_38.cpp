// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 38

// Problema planteado: En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9 millones. Las tasas de crecimiento de la población son de 2% y 3% respectivamente.
// Desarrollar un programa para saber en qué año la población del país B supera a la de A.

#include <iostream>
using namespace std;

int main() {
    double A = 25.0, B = 19.9, tA = 0.02, tB = 0.03;
    int a = 2009;
    while (B <= A) { //el bucle se detiene cuando a supere a b
        A *= (1 + tA);
        B *= (1 + tB);
        a++;
    }
    cout << "La poblacion del pais B supera a la del pais A en el año " << a << endl;
    return 0;
}