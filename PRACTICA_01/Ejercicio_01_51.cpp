// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 51

// Problema planteado: Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El método para obtener el cociente y el resto es por restas sucesivas. (gracias que amable c: )

#include <iostream>
using namespace std;

void C(int a, int b) {
    int c = 0, r = a;
    while ((r -= b) >= 0) c++; // calcuula con restas sucesivas
    cout << "C: " << c << " R: " << r + b << endl;
}
int main() {
    int n1, n2;
    cout << "Numeros enteros: ";
    cin >> n1 >> n2;
    C(n1, n2);
    return 0;
}