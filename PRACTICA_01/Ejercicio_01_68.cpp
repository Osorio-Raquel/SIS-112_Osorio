// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 68

// Problema planteado: . Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <ctime>
using namespace std;

bool e(int s) {
    if (s <= 1) return false;
    for (int i = 2; i * i <= s; i++)
        if (s % i == 0) return false;
    return true;
}
int main() {
    srand(time(nullptr)); //Inicia el generador de los numeros aleatorios :p
    int p = 0;
    for (int i = 0; i < 50; i++) {
        int s = rand() % 100;
        cout << s << " ";
        p += e(s);
    }
    cout << "\nCantidad de numeros primos: " << p << endl;
    return 0;
}
