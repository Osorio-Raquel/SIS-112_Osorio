// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023
 
// Número de ejericio: 13

// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>
using namespace std;

int main(){
    long n; //para que la cantidad de digitros pueda ser mas larga
    int c = 0;
    cin >> n;
    while(n!=0){
        n /= 10;
        ++c;
    }
    cout << "Cantidad de dgitos: " <<c;
    return 0;
}
