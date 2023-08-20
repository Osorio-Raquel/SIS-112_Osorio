// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 20
 
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, m;
    cout << "ingrese los numeros: " << endl;
    cin >> a >> b >> c;
    if (a != b && b != c && a!= c){ //verifico si son iguales o no
        m = min(a,min(b,c));
        cout << "el menor nuemro es: " << m << endl;
    }
    else {
        cout << "los numeros son iguales" << endl;
    }
    return 0;
}
