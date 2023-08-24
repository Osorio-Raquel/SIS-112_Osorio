// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023
 
// Número de ejericio: 25

// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
// aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo:
// Supongamos que el número “pensado” por la computadora sea el 42.
// Salida del programa:
// Estoy pensando un número entre 0 y 50
// Intento 1
// ? 25
// El numero esta entre 25 y 50
// Intento 2
// ? 34
// El numero esta entre 34 y 50
// Intento 3
// ? 45
// El numero esta entre 34 y 45
// Intento 4
// ? 40
// El numero esta entre 40 y 45
// Intento 5
// ? 42
// Felicitaciones… Adivinaste el número

#include <iostream>
#include<stdlib.h> // para hallar el random
using namespace std;

int main() {
    int a, b, c, i, num, intentos;
    b=0;
    c=50;
    intentos = 5;
    num=rand()%51;
    for (i=1; i <= intentos; ++i){
        cout << "Estoy pensando un numero entre " << b << " y " << c << endl;
        cout << "intento " << i << endl;
        cin >> a;
        cout << a << endl;
        if (a<num){
            b=a;
        }
        else if (a>num){
            c=a;
        }
        else {
            cout << "Felicitaciones… Adivinaste el numero" << endl;
        }
    }
    return 0;
}
