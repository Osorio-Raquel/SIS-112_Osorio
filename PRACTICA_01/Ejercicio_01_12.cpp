// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 12

// Problema planteado: Mostrar los primero 100 número primos.

#include <iostream>
using namespace std;
 
bool p(int n) 
{
    int i;
    if (n <= 1) return false;
    for (i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

void m(int c)//una funcion generalizada en caso de cambiar la cantidad requerida de numeros primos
{
    int x=2, ct=0;
    while (ct < c) {
        if (p(x)) {
            cout << x << "\n";
            ++ct;
        }
        ++x;
    }
    cout << endl;
}

int main() {
    m(100);
    return 0;
}