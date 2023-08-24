// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 65

// Problema planteado: Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo de manera literal

#include <iostream>
#include <map> //para facilitar la asignacion de los nombres
using namespace std;

map<int, string> a = {{0, "cero"}, {1, "uno"}, {2, "dos"}, {3, "tres"}, {4, "cuatro"},
                         {5, "cinco"}, {6, "seis"}, {7, "siete"}, {8, "ocho"}, {9, "nueve"}};

map<int, string> uni = {{10, "diez"}, {11, "once"}, {12, "doce"}, {13, "trece"}, {14, "catorce"},
                               {15, "quince"}, {20, "veinte"}, {30, "treinta"}, {40, "cuarenta"},
                               {50, "Cincuenta"}, {60, "sesenta"}, {70, "setenta"}, {80, "ochenta"},
                               {90, "noventa"}};

void mos(int n) {
    if (uni.count(n)) {
        cout << uni[n] << endl;
    } else {
        cout << uni[n - n % 10] << " y " << a[n % 10] << endl;
    }
}
int main() {
    int n;
    cout << "Ingrese un número no mayor a dos dígitos: ";
    cin >> n;
    if (n < 0 || n > 99) {
        cout << "Número fuera de rango." << endl;
        return 1;
    }
    mos(n);
    return 0;
}