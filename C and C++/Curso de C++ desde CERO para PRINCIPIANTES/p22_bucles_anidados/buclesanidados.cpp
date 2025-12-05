#include <iostream>

using namespace std;

int main() {

    cout << "Tabla de multiplicar del 1 al 12:" << endl;
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "------------------" << endl;
    }
    
    return 0;
}