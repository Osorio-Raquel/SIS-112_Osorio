// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 21

// Problema planteado: . Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior,
// obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2). 

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "ingrese el numero: " << endl;
    cin >> a;
    cout << "ingrese el intervalo: " << endl;
    cin >> b >> c;
    if (a >=b && a <= c ){ // reviso los casos en los que cae para realizar la operacion correspondiente
        cout << a*a << endl;
        }
    else if (a<b){
        cout << 1/a << endl;
        }
    else {
        cout << a/2 << endl;
    }
    return 0;
}