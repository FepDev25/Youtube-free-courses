#include <iostream>

using namespace std;

int main() {
    
    // Un puntero es una variable que almacena la direccion de memoria de otra variable

    string nombre = "Felipe";
    string *pNombre = &nombre; // El operador & obtiene la direccion de memoria de la variable

    cout << "Nombre: " << nombre << endl;
    cout << "Puntero pNombre: " << pNombre << endl;
    cout << "Valor apuntado por pNombre: " << *pNombre << endl; // El operador * obtiene el valor almacenado en la direccion de memoria


    int edad = 20;
    int *pEdad = &edad;
    cout << "Edad: " << edad << endl;
    cout << "Puntero pEdad: " << pEdad << endl;
    cout << "Valor apuntado por pEdad: " << *pEdad << endl;

    string nombres[] = {"Ana", "Luis", "Carlos"};
    string *pNombres = nombres; // El nombre del arreglo es un puntero a su primer elemento

    cout << "Nombres: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre " << i + 1 << ": " << *(pNombres + i) << endl; // Accediendo a los elementos del arreglo a traves del puntero
    }

    *(pNombres + 1) = "Maria"; // Modificando el segundo elemento del arreglo a traves del puntero
    cout << "Nombres despues de la modificacion: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre " << i + 1 << ": " << *(pNombres + i) << endl;
    }

    return 0;
}