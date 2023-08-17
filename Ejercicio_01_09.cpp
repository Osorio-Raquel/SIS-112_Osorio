// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 9

// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. 
// Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

#include <iostream>
using namespace std;

void m(int n) 
{
    string me[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    if (n >= 1 and n <= 12) {
        cout << "rl mes es: " << me[n - 1] <<endl; //[n - 1] para encontrar la posicion
    } else {
        cout<< "mes invalido" <<endl;
    }
}

int main() 
{
    int a;
    cout << "ingrese un numero de mes:";
    cin >> a;
    m(a);
    return 0;
}