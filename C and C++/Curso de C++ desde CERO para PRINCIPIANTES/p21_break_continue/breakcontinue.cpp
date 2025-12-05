#include <iostream>

using namespace std;

int main() {

    cout << "Ejemplo de break en un ciclo for:" << endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
            break; // Sale del ciclo cuando i es 5
        cout << "i: " << i << endl;
    }

    cout << "\nEjemplo de continue en un ciclo for:" << endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue; // Salta a la siguiente iteración cuando i es par
        cout << "i: " << i << endl;
    }


    return 0;
}