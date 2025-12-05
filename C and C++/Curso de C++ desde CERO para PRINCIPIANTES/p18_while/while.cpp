#include <iostream>

using namespace std;

int main() {

    string nombre;

    int i = 0;
    while (nombre.empty()) {
        i++;
        cout << "Ingrese su nombre: ";
        getline(cin, nombre);
    }

    cout << "Se ingresó el nombre después de " << i << " intentos. Hola " << nombre << endl;

    return 0;
}