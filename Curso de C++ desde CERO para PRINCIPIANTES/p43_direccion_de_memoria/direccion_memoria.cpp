#include <iostream>

using namespace std;

int main() {

    string nombre = "Felipe";
    int edad = 20;
    bool es_estudiante = true;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Es estudiante: " << (es_estudiante ? "Sí" : "No") << endl;

    cout << "Dirección de memoria de 'nombre': " << &nombre << endl;
    cout << "Dirección de memoria de 'edad': " << &edad << endl;
    cout << "Dirección de memoria de 'es_estudiante': " << &es_estudiante << endl;

    // La dirección de memoria puede variar en cada ejecución del programa, es hexadecimal.

    return 0;
}