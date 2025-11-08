#include <iostream>

using namespace std;

struct Automovil {
    string modelo;
    int anio;
    string color;
};

void imprimirAutomovil(Automovil automovil);
void pintarAuto(Automovil &automovil, string color); // Así si se pasa por referencia

// Estructura a funcion
int main() {

    Automovil auto1;
    auto1.modelo = "Mustang";
    auto1.anio = 2024;
    auto1.color = "Rojo";
    cout << &auto1 << endl;
    imprimirAutomovil(auto1); // Se pasa por valor, no por referencia. Direcciones de memoria distintas

    Automovil auto2;
    auto2.modelo = "Toyota";
    auto2.anio = 2025;
    auto2.color = "Azul";
    imprimirAutomovil(auto2);
    pintarAuto(auto2, "Amarillo"); // Se pasa la referencia
    imprimirAutomovil(auto2);

    return 0;
}

void imprimirAutomovil(Automovil automovil){
    cout << "**** Auto ****" << endl;
    cout << automovil.modelo << endl;
    cout << automovil.anio << endl;
    cout << automovil.color << endl;
    cout << &automovil << endl;
}

void pintarAuto(Automovil &automovil, string color){
    automovil.color = color;
}
