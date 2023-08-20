// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 64

// Problema planteado: Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, r;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n < 0) { // me aseguro que sea positivo
        cout << "Numero invalido." << endl;
        return 1;
    }
    int arr[10] = {};
    while (n > 0) {
        arr[n % 10]++;
        n /= 10;
    }
    r = 0;
    for (int i = 1; i < 10; i++)
        while (arr[i]--) r = r * 10 + i; //crear el nuevo numero
    cout << "El número ordenado es: " << r << endl;
    return 0;
}