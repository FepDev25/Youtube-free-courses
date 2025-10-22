#include <iostream>

using namespace std;

void validarPunterosNulos(int *puntero) {
    if (puntero == nullptr) {
        cout << "El puntero es nulo." << endl;
    } else {
        cout << "El puntero apunta a la direccion: " << puntero << " con valor: " << *puntero << endl;
    }
}

int main() {
    
    // Valor nulo es un valor especial que indica que una variable no apunta a ningun objeto o direccion valida en memoria. 
    // Puntero nulo se inicializa con el valor nullptr.

    int *puntero = nullptr;
    int x = 10;
    validarPunterosNulos(puntero); // Deberia indicar que el puntero es nulo
    puntero = &x;
    validarPunterosNulos(puntero); // Deberia indicar que el puntero es valido


    return 0;
}

