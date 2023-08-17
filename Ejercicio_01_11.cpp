// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 11

// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato civil. Se paga por categoría de acuerdo con la siguiente tabla.
// | Categoria    |   Permanente    | Contrato Civil |
// |  A           | 25%             | 18%            |
// |  B           | 20%             | 14%            |
// |  C           | 15%             | 12%            |
// Calcule el total ganado siendo el salario por hora de 150 Bs por hora. Se debe ingresar cuantas horas a la semana pasa clases y en que categoría está

#include <iostream>
using namespace std;

void cal(char c, char o, int h) {
    double p[] = {0.25, 0.20, 0.15, 0.0};
    double t[] = {0.18, 0.14, 0.12, 0.0};
    double s = 150.0;
    double* y;
    if (o == 'p') {
        y = p;
    } else if (o == 'c') {
        y = t;
    } else {
        cout << "Tipo de contrato no valido." << endl;
        return;
    } 
    double to = (s * h * 4) * y[c - 'A']; //uso el valor ascii de A para determinar el procentaje que tomara
    cout << "El total ganado es: " << to << " Bs" << endl;
}

int main() {
    char c,o;
    int h;
    cout << "Ingrese la categoria: ";
    cin >> c;
    cout << "Ingrese si es permanente o por contrato (p/c): ";
    cin >> o;
    cout << "Ingrese la cantidad de horas a la semana:";
    cin >> h;
    cal(c, o, h);
    return 0;
}