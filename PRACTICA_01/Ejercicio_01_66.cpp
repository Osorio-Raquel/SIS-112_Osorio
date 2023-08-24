// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 66

// Problema planteado: Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
// cantidad de billetes y monedas a convertir. Ej:
// Sea el monto = 655 Bs.
// La salida será:
// 3 billetes de 200 Bs
// 1 billete de 50 Bs.
// 1 moneda de 5 Bs

#include <iostream>
using namespace std;

int main() {
    double m;
    cout << "Monto: ";
    cin >> m;
    int v[] = {200, 100, 50, 20, 10, 5, 2, 1};
    string n[] = {"billetes de", "biletes de", "billetes de", "billetes de", "billetes de",
                        "monedas de", "monedas de", "monedas de"};  //representar los valores de los billetes y monedas respectivamente
    for (int i = 0; i < 8; i++) {
        int c = m / v[i];
        m -= c * v[i];
        if (c > 0) {
            cout << c << " " << n[i] << " " << v[i] << " Bs" << endl;
        }
    }
    return 0;
}
