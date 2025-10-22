#include <iostream>

using namespace std;

int main() {

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz 3x3:" << endl;
    int filass = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    cout << "Filas: " << filass << ", Columnas: " << columnas << endl;
    for (int i = 0; i < filass; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elemento en la fila 2, columna 3: " << matriz[1][2] << endl;
    cout << "Elemento en la fila 3, columna 1: " << matriz[2][0] << endl;

    return 0;
}