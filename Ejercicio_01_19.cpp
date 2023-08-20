// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 19
 
// Problema planteado: Convertir coordenadas polares en rectangulares.

#include <iostream>
#include <cmath> //para realizare la operacion
using namespace std;
int main() {
    double r, t, x, y;
    cout << "ingrese la magnitud:";
    cin >> r;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> t;
    x = r * cos(t);
    y = r * sin(t);
    cout << "Coordenadas rectangulares: (" << x << ", " << y << ")" << endl;

    return 0;
}
