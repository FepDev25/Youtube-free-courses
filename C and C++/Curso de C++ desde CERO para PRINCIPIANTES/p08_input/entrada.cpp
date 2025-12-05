#include <iostream>

using namespace std;

int main(){

    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Tienes " << edad << " años." << endl;

    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin >> ws, nombre);
    cout << "Hola, " << nombre << "!" << endl;

    return 0;
}