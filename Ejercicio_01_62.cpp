// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 62

// Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
// 2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
// Datos: edad1
// edad2
// . . . . .
// edad25

#include <iostream>
using namespace std;

void ct(int e[], int tn) {
    int tp = 0;
    for (int i = 0; i < tn; i++) {
        tp += (e[i] == 1) ? 6 : (e[i] == 2) ? 3 : (e[i] == 3) ? 2 : 0; // utilizo condiciones
    }
    cout << "El total de pañales diarios es: " << tp << endl;
}
int main() {
    const int tn = 25;
    int e[tn];
    for (int i = 0; i < tn; i++) {
        cout << "Ingrese la edad " << i+1 <<" : "<< endl;;
        cin >> e[i];
    }
    ct(e, tn);
    return 0;
}

