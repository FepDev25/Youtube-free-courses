#include <iostream>

using namespace std;

int main() {
    
    string comidas[5];
    int tamano = sizeof(comidas) / sizeof(string);

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese el nombre de la comida " << (i + 1) << " (o presione s para salir):";
        getline(cin, comidas[i]);

        if (comidas[i] == "s" || comidas[i] == "S") {
            comidas[i] = "";
            break;
        }
    }

    cout << "\nLas comidas ingresadas son:\n";
    for (int i = 0; !comidas[i].empty(); i++)
    {
        cout << comidas[i] << endl;
    }
    

    return 0;
}