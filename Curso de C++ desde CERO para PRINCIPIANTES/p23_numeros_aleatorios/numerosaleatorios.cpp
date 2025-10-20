#include <iostream>

using namespace std;

int main() {

    srand(time(NULL)); // Semilla aleatoria para cada ejecución
    int num = (rand() % 6) + 1; // Genera un número aleatorio entre 1 y 6
    cout << "Número aleatorio: " << num << endl;
    
    return 0;
}