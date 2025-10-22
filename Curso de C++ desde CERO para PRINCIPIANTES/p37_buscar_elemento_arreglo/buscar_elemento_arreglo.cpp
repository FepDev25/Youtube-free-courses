#include <iostream>

using namespace std;

int buscarArreglo(int arreglo[], int tam, int indice);

int main() {

    int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tam = sizeof(numeros) / sizeof(int);
    int indice;
    int miNum;

    cout << "Ingrese un numero a buscar: ";
    cin >> miNum;

    indice = buscarArreglo(numeros, tam, miNum);
    if (indice != -1) {
        cout << "Numero encontrado en el indice: " << indice << endl;
    } else {
        cout << "Numero no encontrado." << endl;
    }

    return 0;
}

int buscarArreglo(int arreglo[], int tam, int elemento) {
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == elemento) {
            return i;
        }
    }
    return -1;
}