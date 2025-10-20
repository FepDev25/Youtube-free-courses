#include <iostream>
#include <ctime>

using namespace std;

void saludar(); // Declaracion de la funcion

void felizCumpleanios(string nombre = "Amigo", int edad = 0) {
    cout << "Feliz Cumpleanios " << nombre << "!" << endl;
    if (edad > 0) {
        cout << "Tienes " << edad << " años." << endl;
    }
}

int main() {
    saludar(); // Llamada a la funcion
    felizCumpleanios();
    felizCumpleanios("Juan", 25);
    return 0;
}

void saludar() {
    cout << "Hola, bienvenido al programa!" << endl;
}