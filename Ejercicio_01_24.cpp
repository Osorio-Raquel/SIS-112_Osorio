// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 24
 
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>
using namespace std;

int main() {
    int n, s, t; //en s y t guardo los digitos
    cout << "ingrese el numero: " << endl;
    cin >> n;
    s = n%10;
    n/=10;
    t = n%10;
    cout << s<< "  " << t << "  " << s+t << endl;
    return 0;
}