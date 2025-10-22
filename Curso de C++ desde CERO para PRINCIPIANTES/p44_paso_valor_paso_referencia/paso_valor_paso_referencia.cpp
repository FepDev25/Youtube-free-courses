#include <iostream>

using namespace std;

void cambio(string comida, string bebida);
void cambioRef(string &comida, string &bebida);

int main() {

    string bebida1 = "Coca Cola";
    string comida = "Pizza";

    // Paso por valor, no afecta a las variables originales
    cout << "Antes del cambio por valor:" << endl;
    cout << "Comida: " << comida << endl;
    cout << "Bebida: " << bebida1 << endl;

    cambio(comida, bebida1); 

    cout << "Después del cambio por valor:" << endl;
    cout << "Comida: " << comida << endl;
    cout << "Bebida: " << bebida1 << endl;

    // Paso por referencia, afecta a las variables originales
    cout << "\nAntes del cambio por referencia:" << endl;
    cout << "Comida: " << comida << endl;
    cout << "Bebida: " << bebida1 << endl;

    cambioRef(comida, bebida1);

    cout << "Después del cambio por referencia:" << endl;
    cout << "Comida: " << comida << endl;
    cout << "Bebida: " << bebida1 << endl;

    return 0;
}

void cambio(string comida, string bebida) {
    string temp = bebida;
    bebida = comida;
    comida = temp;
}

void cambioRef(string &comida, string &bebida) {
    string temp = bebida;
    bebida = comida;
    comida = temp;
}   