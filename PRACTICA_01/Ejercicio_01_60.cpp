// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 60

// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos
// siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc.
// Es decir: 1 = 1^3,
// 3 + 5 = 2^3 = 8,
// 7 + 9 + 11 = 3^3 = 27,
// 13 + 15 + 17 + 19 = 4^3 = 64.
// Elabore un programa en el que dado un número n entero positivo, imprima los n primeros cubos utilizando esta propiedad.

#include <iostream>
using namespace std;

int main() {
    int n, a = 1, x = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        x=0;//el sumador de reinicia
        cout << i << "^3 = ";
         for (int j = 1; j <= i; j++) {
            cout << a;
            x+=a; //el sumador guarda los valores impares
            a += 2;
            if (j < i) {
                cout << " + ";
            }
        }
        cout << " = " << x << endl;
    }
    return 0;
}
