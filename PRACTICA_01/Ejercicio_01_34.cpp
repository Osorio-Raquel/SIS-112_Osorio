// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 34

// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>
using namespace std;

int main() {
    int s, c = 1;
    cout << "Ingrese el numero de terminos: ";
    cin >> s;
    for (int i = 0; i < s; ++i) { // la secuencia es la suma de los digitos con el numero 4+4=8; 8+8=16; 16+6+1=23; 23+2+3= 28 etc... 
        cout << c << " ";
        int s = 0;
        int n = c;
        while (n > 0) {
            s += n % 10; //bajo esa logica encuentro sus digitos
            n /= 10;
        }
        c += s;
    }
    return 0;
}
