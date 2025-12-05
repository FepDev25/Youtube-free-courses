#include <iostream>

using namespace std;

void ordenarArreglo(int arreglo[], int tam);
void imprimirArreglo(int arreglo[], int tam);

int main() {
    int arreglo[] = {5, 2, 9, 1, 5, 6, 3, 8, 7, 4, 0};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    ordenarArreglo(arreglo, tam);
    cout << "Arreglo ordenado: ";
    imprimirArreglo(arreglo, tam);
    return 0;
}

void ordenarArreglo(int arreglo[], int tam){
    // Ordenamiento de burbuja
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

void imprimirArreglo(int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
