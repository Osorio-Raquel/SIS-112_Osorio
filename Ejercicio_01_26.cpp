// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 26
 
// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
// distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para asegurar el pago exacto de los artículos comprados la señora anota el precio y la cantidad del artículo, 
//estableciendo cuanto pagara por este articulo; así sumara los demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los 
//artículos de primera necesidad.

#include <iostream>
using namespace std;
int main() {
    int n;
    double total = 0;

    cout << "Ingrese el numero de articulos en el carrito: ";
    cin >> n;
    for (int i = 0; i < n; ++i) { // Iterar a través de cada artículo
        double p, c;
        cout << "Articulo " << i + 1 << ":" << endl;
        cout << "Ingrese el precio del articulo: ";
        cin >> p;
        cout << "Ingrese la cantidad del artículo: ";
        cin >> c;
        total += p * c;
    }

    cout << "El total de la compra es: " << total << " Bs" << endl;

    return 0;
}
