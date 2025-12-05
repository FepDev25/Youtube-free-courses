#include <iostream>

using namespace std;

int main() {

    // Memoria dinamica: Es aquella que se asigna despues de que el programa ya esta compilado y esta en ejecucion
    int *pNum = NULL;
    pNum = new int; 
    *pNum = 25;

    cout << "direccion: " << pNum << "\n";
    cout << "valor: " << *pNum << "\n";
    
    delete pNum;

    char *pNotas = NULL;
    int tamanio;

    cout << "Ingrese numero denotas: \n";
    cin >> tamanio;

    pNotas = new char[tamanio];

    for (int i = 0; i < tamanio; i++){
        cout <<"Ingrese la nota " << (i+1) << ":";
        cin >> pNotas[i];
    }

    delete pNotas;

    return 0;
}