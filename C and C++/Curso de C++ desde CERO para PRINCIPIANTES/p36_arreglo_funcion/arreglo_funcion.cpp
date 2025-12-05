#include <iostream>

using namespace std;

double obtenerTotal(double precios[], int n);

int main() {
    
    double precios[] = {10.5, 20.0, 15.75, 30.0, 25.5};
    int n = sizeof(precios) / sizeof(precios[0]);
    double total = obtenerTotal(precios, n);
    cout << "El total de los precios es: " << total << endl;

    return 0;
}


double obtenerTotal(double precios[], int n) {
    double total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += precios[i];
    }
    return total;
}
