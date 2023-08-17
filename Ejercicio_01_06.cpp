// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023
 
// Número de ejericio: 6

// Problema planteado: Número primo

#include <iostream>
using namespace std;

bool a(int n)  // establezco una funcion para determinar si el nuemro es divisible ente mas numeros
{
    int i;
    if (n <=1)
        return false;
    for ( i = 2;i*i <= n; ++i)
        if (n%i == 0)
            return false;
    return true;
}

int main() 
{
    int m;
    cout << "Ingrese un numero:";
    cin >> m;
    if (a(m))
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;
    return 0;
}