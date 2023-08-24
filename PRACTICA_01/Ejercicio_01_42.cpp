// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 42

// Problema planteado:. En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada gallina se obtiene según la fórmula:
// Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone 

#include <iostream>
using namespace std;

int main() {
    int n;
    double p, h, hue, sumc = 0, c, promC;
    cout << "Cantidad de gallinas: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Gallina " << i << ":" << endl;
        cout << "Ingrese el peso, altura, cantidad de huevos \n";
        cin >> p;
        cin >> h;
        cin >> hue;
        c = (p * h) / hue; //calculo de la calidad
        sumc += c;
    }
    promC = sumc / n;
    cout << "Promedio de calidad de las gallinas: " << promC << endl;
    return 0;
}