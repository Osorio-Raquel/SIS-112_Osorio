// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 47

// Problema planteado:Un negocio de “Cosméticos” de belleza, contratara a n vendedoras para la venta de sus productos. Cada Vendedora en promedio debe vender 10 productos en un mes.
// La cancelación de los sueldos a las vendedoras se realiza cada fin de mes, bajo las siguientes características
// Una vendedora recibe un sueldo básico de acuerdo a su antigüedad y además se añade un sueldo extra por comisión de ventas del 10% del total vendido.
// La propietaria del negocio desde conocer cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuanto de comisión recibirá como extra. Diseñar un algoritmo para este problema.

#include <iostream>
using namespace std;

double com(double v) { return v * 0.1; }
int main() {
    int n;
    cout << "Vendedor: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double a, s, v;
        cout << "Vendedor " << i << ":" << endl;
        cout << "Antigüedad: ";
        cin >> a;
        cout << "Sueldo base: ";
        cin >> s;
        cout << "Ventas: ";
        cin >> v;
        double c = com(v);
        cout << "Comision: " << c << " Bs." << endl;
        cout << "Total: " << s + c << " Bs." << endl;
    }
    return 0;
}
