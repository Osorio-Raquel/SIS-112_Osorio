// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 35

// Problema planteado:  Un supermercado decide efectuar una promoción de descuentos por el valor de las compras que efectúan sus clientes, esta promoción se basa en las siguientes condiciones:
// Si el total de ventas es < 100 Bs. no se aplica ningún descuento
// Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
// Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
// Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo

#include <iostream>
using namespace std;

int main() {
    int n, i;
    double t = 0, d = 0;
    cout << "Ingrese la cantidad de clientes: ";
    cin >> n;
    for (i = 0; i < n; ++i) {
        double c;
        cout << "Ingrese el monto de la compra del cliente " << i + 1 << ": ";
        cin >> c;
        t += c;
        if (c >= 100 && c < 500) { //verificamos en que caso cae
            d += c * 0.95;
        } else if (c >= 500) {
            d += c * 0.92;
        } else {
            d += c;
        }
    }
    cout << "total de ventas efectuadas " << t << " Bs" << endl;
    cout << "Total de ventas con descuento " << d << " Bs" << endl;
    return 0;
}