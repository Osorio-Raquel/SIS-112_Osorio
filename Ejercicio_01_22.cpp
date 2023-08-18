// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: ##/08/2023

// Número de ejericio: 22
 
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. Si las computadoras son menos
// de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
// descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.

#include <iostream>
using namespace std;

void cal(int c, double p) {
    double t = c * p;
    if (c < 5) {
        t -= t * 0.1;
    } else if (c < 10) {
        t -= t * 0.2;
    } else {
        t -= t * 0.4;
    }
    cout << "Total a pagar con descuento: " << t << " Bs" << endl;
}

int main() {
    int c;
    double p;
    cout << "Ingrese el numero de computadoras compradas: ";
    cin >> c;
    cout << "Ingrese el precio de cada computadora: ";
    cin >> p;
    cal(c, p);
    return 0;
}