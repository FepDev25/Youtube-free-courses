#include <iostream>

using namespace std;

int main() {

    int numero;
    do {
        cout << "Ingrese un numero positivo: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "El numero ingresado es: " << numero << endl;

    return 0;
}