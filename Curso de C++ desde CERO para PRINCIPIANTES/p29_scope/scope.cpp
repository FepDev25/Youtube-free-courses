#include <iostream>

using namespace std;

// Variables globales
int contador = 0;
void sumarContador();
void imprimirNombre();
void contadores();

int main() {

    // Variables locales
    string nombre = "Felipe";
    int edad = 20;
    cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    imprimirNombre();

    sumarContador();
    sumarContador();
    sumarContador();
    cout << "Contador global: " << contador << endl;

    contadores();

    return 0;
}

void sumarContador() {
    contador++;
}

void imprimirNombre(){
    // Esta función no puede acceder a la variable 'nombre' definida en main
    string nombre = "Desconocido";
    cout << "Nombre dentro de la función: " << nombre << endl;
}

void contadores(){
    int contador = 0; // Variable local
    contador = 20;
    cout << "Contador local: " << contador << endl;

    ::contador++; // Accediendo a la variable global
    cout << "Contador global modificado: " << ::contador << endl;
}