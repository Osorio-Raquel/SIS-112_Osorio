// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 44

// Problema planteado: La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, 
// se aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. 

#include <iostream>
using namespace std;

int main() {
    int n, j;
    double s = 0, i = 0;
    cout << "Cantidad de productos vendidos: ";
    cin >> n;
    for ( j = 1; j <= n; j++) {
        double p;
        cout << "Precio del producto " << j << " Bs: ";
        cin >> p;
        s += p * 1.13;
        if (s > 2500) s *= 0.95;
        i += p * 0.13;
    }
    cout << "Suma total: " << s << " Bs" << endl;
    cout << "IVA: " << i << " Bs" << endl;
    return 0;
}
