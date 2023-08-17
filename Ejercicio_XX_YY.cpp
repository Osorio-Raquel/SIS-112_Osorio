//PLANTILLA
// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: ##/08/2023

// Fecha modificación: ##/08/2023

// Número de ejericio: ##

// Problema planteado:
//BASE
#include <iostream>
 
using namespace std;
  
int main() {
 
    /**
     * SOLUCION
     */
 
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
//FUCIONES
void saludar() {
    std::cout << "¡Hola, mundo!" << std::endl;
}

int main() {
    // Llamada
    saludar();

    // Declaración y asignación de variables
    int numero = 42;
    double pi = 3.14159;
    std::string mensaje = "¡Bienvenido a C++!";

    // Imprimir variables
    std::cout << "El número es: " << numero << std::endl;
    std::cout << "El valor de pi es: " << pi << std::endl;
    std::cout << mensaje << std::endl;

    // Estructura condicional (if-else)
    if (numero > 50) {
        std::cout << "El número es mayor que 50." << std::endl;
    } else {
        std::cout << "El número no es mayor que 50." << std::endl;
    }

    // Bucle for
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteración " << i << std::endl;
    }

    return 0; 
}