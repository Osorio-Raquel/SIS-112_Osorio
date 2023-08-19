// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 33

// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días. 

#include <iostream>
using namespace std;

int main() {
    int d, m, e, k;
    cout << "Ingrese la primera fecha: ";
    cin >> d >> m;
    while (d < 1 or d > 30 or m < 1 or m > 12) {
        cout << "Fecha erronea. Intente nuevamente: ";
        cin >> d >> m;
    }
    cout << "Ingrese la segunda fecha: ";
    cin >> e >> k;
    while (e < 1 or e > 30 or k < 1 or k > 12) {
        cout << "Fecha erronea. Intente nuevamente: ";
        cin >> e >> k;
    }
    int dif = (k - m)* 30+(e-d);
    cout << "Días de diferencia: " << dif << endl;
    return 0;
}
