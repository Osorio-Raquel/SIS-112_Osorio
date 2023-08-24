// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 58

// Problema planteado: . Generar:
// 121
// 12321
// 1234321
// 123454321
// 12345654321
// 1234567654321
// 123456787654321
// 12345678987654321 

#include <iostream>
using namespace std;

int main() {
    int n,i ,j;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (i = 1; i <= n; i++) {    // Iterar para cada nivel
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}