// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 36

// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la cantidad de alumnos mayores de 18 años, y la cantidad de alumnos que miden más de 1.75 cm

#include <iostream>
using namespace std;

int main() {
    int n, e, i, m = 0, a = 0; // m y a son mis contadores
    double h, sa = 0, sh = 0;
    cout << "Ingrese el numero de alumnos: ";
    cin >> n;
    for (i = 0; i < n; ++i) {
        cout << "Ingrese la edad  " << i + 1 << ": ";
        cin >> e;
        cout << "Ingrese la estatura " << i + 1 << " (en cm): ";
        cin >> h;
        sa += e;
        sh += h;
        if (e > 18) {
            m++;
        }
        if (h > 175) {
            a++;
        }
    }
    double pe = static_cast<double>(sa) / n;
    double ph = sh / n;
    cout << "Edad media: " << pe << " años" << endl;
    cout << "Estatura media: " << ph << " cm" << endl;
    cout << "Alumnos mayores de 18 años: " << m << endl;
    cout << "Alumnos con estatura mayor a 1.75 m: " << a << endl;
    return 0;
}