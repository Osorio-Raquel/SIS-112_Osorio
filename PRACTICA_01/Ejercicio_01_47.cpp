// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 47

// Problema planteado:Un negocio de “Cosméticos” de belleza, contratara a n vendedoras para la venta de sus productos. Cada Vendedora en promedio debe vender 10 productos en un mes.
// La cancelación de los sueldos a las vendedoras se realiza cada fin de mes, bajo las siguientes características
// Una vendedora recibe un sueldo básico de acuerdo a su antigüedad y además se añade un sueldo extra por comisión de ventas del 10% del total vendido.
// La propietaria del negocio desde conocer cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuanto de comisión recibirá como extra. Diseñar un algoritmo para este problema.

#include <iostream>
using namespace std;

double x(int a, int b) { //calcula la comision de antiguedad
    return a >= 2 && a <= 4 ? 0.05*b
         : a >= 5 && a <= 7 ? 0.11*b
         : a >= 8 && a <= 10 ? 0.18*b
         : a >= 11 && a <= 14 ? 0.26*b
         : a >= 15 && a <= 19 ? 0.34*b
         : a >= 20 && a <= 24 ? 0.42*b
         : 0.5 *b ;
}

int main() {
    double b, g, t = 0.0, q, j;
    int u, l, o;

    cout << "Ingrese el salario basico: ";
    cin >> b;
    cout << "Ingrese el precio de la unidad del producto: ";
    cin >> g;
    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> u;
    for (int i = 1; i <= u; i++) {
        cout << "VENDEDORA " << i << "\nIngrese años trabajados: ";
        cin >> l;
        cout << "Ingrese cantidad de productos: ";
        cin >> o;
        q = x(l, b);
        j = (b + q) + ((o * g)/10);
        t += j;
        cout << "Sueldo a pagar a VENDEDORA " << i << ": " << (b + q) << " Bs\nComisipn extra: " << ((o * g)/10)<< " Bs\n";
    }
    cout << "Se debe pagar en total: " << t << " Bs." << endl;
    return 0;
}
