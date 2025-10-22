#include <iostream>

using namespace std;

int main() {
   
    string estudiantes[] = {"Ana", "Luis", "Carlos", "Marta", "Sofía"};

    cout << "Lista de estudiantes:" << endl;
    
    int numEstudiantes = sizeof(estudiantes) / sizeof(estudiantes[0]);

    cout << numEstudiantes << endl; // Número de elementos en el arreglo
    cout << sizeof(estudiantes) << endl; // Tamaño total del arreglo en bytes
    cout << sizeof(estudiantes[0]) << endl; // Tamaño de un elemento del arreglo

    for (int i = 0; i < numEstudiantes; i++){
        cout << estudiantes[i] << endl;
    }

    char notas[] = {'A', 'B', 'C', 'D', 'E'};
    int tamanio = sizeof(notas) / sizeof(char); // Número de elementos en el arreglo
    cout << "Notas de los estudiantes:" << endl;
    for (int i = 0; i < tamanio; i++){
        cout << notas[i] << endl;
    }
    

    return 0;
}