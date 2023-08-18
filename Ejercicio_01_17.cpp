// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 17
 
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas

#include <iostream>
using namespace std;

int main() {
    double b, e, d, l;
    cout << "Ingrese el valor en bolivianos:";
    cin >> b;
    e = b * 0.12;
    d = b * 6.96;
    l = b * 0.09;
    cout << "Euros: " << e << " Dolares: " << d << " Libras Esterlinas: " << l << endl;
    return 0;
}