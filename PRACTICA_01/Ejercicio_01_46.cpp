// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 46

// Problema planteado: La empresa “Limbo S.A.”, empresa de seguros tiene contratados a N vendedores. Cada uno hace tres ventas a la semana. Su política de pagos es que un vendedor recibe un
// sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compañía desea saber cuánto dinero obtendrá en la semana cada vendedor por concepto de comisiones por las tres 
// ventas realizadas, y cuanto tomando en cuenta su sueldo base y sus comisiones.

#include <iostream>
using namespace std;

double com(double v, double u) { return (v * u)/10; }

int main() {
    int n, u;
    double s, v;
    cout << "Vendedores: ";
    cin >> n;
    cout << "Precio de producto unitario:";
    cin >> u;
    cout << "Sueldo base general: ";
    cin >> s;
    for (int i = 1; i <= n; i++) { //calculos necesarios para cada vendedor
        cout << "Vendedor " << i << ":" << endl;
        cout << "Ventas: ";
        cin >> v;
        double c = com(v, u);
        cout << "Comisiones: " << c << " Bs." << endl;
        cout << "Total: " << s + c << " Bs." << endl;
    }
    return 0;
}