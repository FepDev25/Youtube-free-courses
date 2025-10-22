#include <iostream>

using namespace std;

void mostrarDatos(const string &nombre, const int &edad);

int main() {

    // Parametro const
    string nombre = "Felipe";
    int edad = 20;

    mostrarDatos(nombre, edad);

    return 0;
}


void mostrarDatos(const string &nombre, const int &edad) {
 
    // nombre += " Gomez"; // Error: no se puede modificar un parametro const
    // edad += 5;         // Error: no se puede modificar un parametro const

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}