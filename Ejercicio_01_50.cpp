// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 50

// Problema planteado: Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter. La función deberá sumar, restar, multiplicar o dividir los valores de los dos 
// primeros parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado.

#include <iostream>
using namespace std;

double op(int a, int b, char op) {
    return (op == '+') ? a + b : (op == '-') ? a - b : (op == '*') ? a * b : (b != 0) ? static_cast<double>(a) / b : 0; // cambioa a de int a double
}
int main() {
    int n, m;
    char y;
    cout << "Ingrese dos numeros enteros: ";
    cin >> n >> m;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> y;
    double r = op(n, m, y);
    cout << "Resultado: " << r << endl;
    return 0;
}
