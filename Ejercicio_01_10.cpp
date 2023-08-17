// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es carácter especial.

#include <iostream>
using namespace std;

void v(char c) {
    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or
            c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') {
            cout << "Es una vocal." << endl; // verifico las mayusculas tambien
        } else {
            cout << "Es una consonante." << endl;
        }
    } else {
        cout << "Es un caracter especial." << endl;
    }
}

int main() {
    char l;
    cout << "ingrese una letra: ";
    cin >> l;
    v(l);
    return 0;
}