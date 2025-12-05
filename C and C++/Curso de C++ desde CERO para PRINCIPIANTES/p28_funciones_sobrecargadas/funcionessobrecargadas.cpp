#include <iostream>

using namespace std;

void hornearPizza(){
    cout << "Horneando pizza..." << endl;
}

void hornearPizza(string tipo){
    cout << "Horneando pizza de " << tipo << "..." << endl;
}

void hornearPizza(string tipo, int tamaño){
    cout << "Horneando pizza de " << tipo << " de tamaño " << tamaño << "..." << endl;
}

int main() {
    hornearPizza();
    hornearPizza("pepperoni");
    hornearPizza("margarita", 12);
    return 0;
}