// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 61

// Problema planteado: Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el Máximo Común Divisor y el Mínimo Común Múltiplo de m y n. El Algoritmo de Euclides
// establece que, si m>=n, MCD(m,n) = MCD(n, m mod n). 
#include <iostream>
using namespace std;

int e(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int a(int m, int n) {
    return (m * n) / e(m, n);
}
int main() {
    int m, n;
    cout << "El valor de m: ";
    cin >> m;
    cout << "El valor de n: ";
    cin >> n;
    int MCD = e(m, n);
    int MCM = a(m, n);
    cout << "MCD de es: " << MCD << endl;
    cout << "MCM de es: " << MCM << endl;
    int a = m, b = n; // Demuestra del Algoritmo de Euclides
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "DEMOSTRACION El MCD de " << m << " y " << n << " es: " << a << endl;    
    return 0;
}