#include <iostream>

using namespace std;

int main() {

    string automoviles[] = {"Corvette", "Mustang", "Camaro", "Challenger", "Charger"};
    cout << "El automovil en la posicion 2 es: " << automoviles[2] << endl;
    cout << "El automovil en la posicion 4 es: " << automoviles[4] << endl;

    automoviles[3] = "Dodge Viper";
    cout << "El automovil en la posicion 3 ahora es: " << automoviles[3] << endl;

    return 0;
}