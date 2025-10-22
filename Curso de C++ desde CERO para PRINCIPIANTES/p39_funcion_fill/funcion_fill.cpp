#include <iostream>

using namespace std;

int main() {
    int tamano = 20;

    // fill(inicio, final, valor)
    string comidas[tamano];
    fill(comidas, comidas + tamano, "Pizza");

    for (const auto& comida : comidas) {
        cout << comida << " ";
    }
    cout << endl;

    string bebidas[tamano];
    fill(bebidas, bebidas + tamano/2, "Agua");
    fill(bebidas + tamano/2, bebidas + tamano, "Jugo");
    for (const auto& bebida : bebidas) {
        cout << bebida << " ";
    }
    cout << endl;

    return 0;
}