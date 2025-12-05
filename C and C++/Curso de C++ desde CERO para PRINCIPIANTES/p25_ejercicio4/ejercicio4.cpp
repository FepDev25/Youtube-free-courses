#include <iostream>

using namespace std;

// Juego de adivinanza de números
int main() {

    int num;
    int adivinar;
    int intentos;

    srand(time(0));

    num = rand() % 100 + 1;
    intentos = 0;

    while (true){
        cout << "Adivina el número (entre 1 y 100): ";
        cin >> adivinar;
        intentos++;

        if (adivinar < num) {
            cout << "Demasiado bajo. Intenta de nuevo." << endl;
        } else if (adivinar > num) {
            cout << "Demasiado alto. Intenta de nuevo." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número " << num << " en " << intentos << " intentos." << endl;
            break;
        }
    }
    
    return 0;
}