#include <iostream>

using namespace std;

int main() {

    double precio = 56.55;
    cout << "El tamaño de la variable precio es: " << sizeof(precio) << " bytes" << endl;

    int cantidad = 10;
    cout << "El tamaño de la variable cantidad es: " << sizeof(cantidad) << " bytes" << endl;

    char letra = 'A';
    cout << "El tamaño de la variable letra es: " << sizeof(letra) << " bytes" << endl;

    bool esValido = true;
    cout << "El tamaño de la variable esValido es: " << sizeof(esValido) << " bytes" << endl;

    string nombre = "Juan";
    cout << "El tamaño de la variable nombre es: " << sizeof(nombre) << " bytes" << endl;

    string nombres[] = {"Ana", "Luis", "Carlos"};
    cout << "El tamaño del arreglo nombres es: " << sizeof(nombres) << " bytes" << endl;

    return 0;
}