// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora. 
// Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.

#include <iostream>
using namespace std;

int main() {
    int h, c;
    cout << "Ingrese la cantidad de horas de estacionamiento: ";
    cin >> h;
    c = 7 + (h - 1) * 5;
    cout << "El costo de estacionamiento es: " << c<< " Bs" << endl;
    return 0;
}