// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023
 
// Número de ejericio: 5

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include <cmath> //utilizo esta libreria para la raiz
using namespace std;

int main() 
{
    double x1, y1, x2, y2, d;
    cout << "Ingrese las coordenadas x e y del punto P1: ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas x e y del punto P2: ";
    cin >> x2 >> y2;
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //usa la formula para hallar la distancvia 
    cout << "La distancia entre los puntos P1 y P2 es: " << d << endl;
    return 0;
}