// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 31

// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es
#include <iostream>
using namespace std;
  
int main() {
 
    int a,b;
    cout << "ingrese los numeros: " << endl;
    cin >> a >> b;
    if (a % b == 0 || b & a == 0){ //verificamos si son divisibles entre si
        cout << "son multiplos!" << endl;
    }
    else{
        cout << "no son multiplos" << endl;
    }
 
    return 0;
}