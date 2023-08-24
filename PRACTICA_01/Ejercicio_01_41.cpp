// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 41

// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
// trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al doble de una hora normal, considere además un descuento del 5% a todos los obreros para pagar su 
// prima de seguro. Por lo tanto determine: el pago total y el pago neto por cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la prima de manera general.

#include <iostream>
#include <iomanip>
using namespace std;

double calcPago(double h, double t) {
    return (h <= 40) ? h * t : 40 * t + (h - 40) * t * 2; } // calcula el pago con condiciones 
double cN(double p) {
    return p * 0.95;
}
void mP(int n, double t) {
    double tot = 0, rP = 0;
    cout << fixed << setprecision(2);
    for (int i = 1; i <= n; i++) {
        double h;
        cout << "obrero " << i << ":\nHoras trabajadas: ";
        cin >> h;
        double p = calcPago(h, t);
        double pN = cN(p);
        tot += p;
        rP += p - pN;
        cout << "Pago total: " << p << " Bs.\nPago neto: " << pN << " Bs\n";
    }
    cout << "Pago total general: " << tot << " Bs.\nRetencion total por prima: " << rP << " Bs\n";
}
int main() {
    int n;
    double tarifa;
    cout << "Cantidad de obreros: ";
    cin >> n;
    cout << "Tarifa por hora: ";
    cin >> tarifa;
    mP(n, tarifa);
    return 0;
}