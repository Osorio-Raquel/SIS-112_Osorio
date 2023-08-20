// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 63

// Problema planteado:  Leer un valor numérico y convertirlo a un número romano (1-9999)

#include <iostream>
using namespace std;

string cn(int m) {
    if (m < 1 || m > 9999) { // verifico el rango
        return "Número fuera de rango.";
    }
    string r = "";
    string u[] = {" ", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string d[] = {" ", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string c[] = {" ", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string mi[] = {" ", "M", "MM", "MMM"};
    r = mi[m / 1000] + c[(m % 1000) / 100] + d[(m % 100) / 10] + u[m % 10];
    return r;
}
int main() {
    int m;
    cout << "Ingrese un número (1-9999): ";
    cin >> m;
    string r = cn(m);
    cout << "El número " << m << " en números romanos es: " << r << endl;
    return 0;
}
