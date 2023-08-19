// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 30
 
// Problema planteado: Calcular la siguiente sucesión 2-3/2+4/3-5/4+...+-n+1/n

#include <iostream>
using namespace std;

int main() {
    int n;
    double s = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            s += static_cast<double>(i) / (i - 1);
        } else {
            s -= static_cast<double>(i) / (i - 1);
        }
    }
    cout << "La suma de la sucesion hasta " << n << " terminos es: " << s << endl;
    return 0;
}
