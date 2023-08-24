// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 16
 
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>
using namespace std;

int main() {
    int s, h, m;
    cout << "ingrese el valor en segundos";
    cin >> s;
    h = s / 3600;  //el proceso de transformar los segundos
    s %= 3600;
    m = s / 60;
    s %= 60;
    cout << "horas: " << h << " minutos: " << m << " segundos: " << s << endl;
    return 0;
}