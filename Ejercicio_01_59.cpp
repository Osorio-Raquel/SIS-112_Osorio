// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 59

// Problema planteado: Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte el orden de sus cifras y se suman el número dado y el invertido. Este proceso se
// continúa las veces que sean necesarias hasta obtener un capicúa. Por ejemplo: Partiendo del 78.
// 78 + 87 = 165.
// 165 + 561 = 726.
// 726 + 627 = 1353.
// 1353 + 3531 = 4884 CAPICÚA.
// El programa debe intentar encontrar capicúas en el rango N y M

#include <iostream>
using namespace std;

int rn(int v) { //invierte los numeros
    int o = 0;
    while (v > 0) {
        o = o * 10 + v % 10;
        v /= 10;
    }
    return o;
}
bool c(int v) {
    return v == rn(v);
}
int main() {
    int n, m, x;
    cout << "Ingrese el rango [n, m]: ";
    cin >> n >> m;
    cout << "Ingrese un numero: ";
    cin >> x;
    int a = 0;
    while (!c(x) and x <=m and x>=n) {
        int o = rn(x);
        cout << x << " + " << o;
        x += o;
        cout << " = " << x << endl;
        a++;
    }
    if (x == rn(x)){
        cout << "CAPICUA!"<< endl;
    }
    else{
        cout << "no se encontro un número capicua" << endl;
    }
    return 0;
}