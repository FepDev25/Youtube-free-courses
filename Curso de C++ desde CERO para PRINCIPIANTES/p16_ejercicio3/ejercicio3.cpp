#include <iostream>

using namespace std;

// Conversion de temperatura de Celsius a Fahrenheit
int main() {
    
    double temp;
    char op;

    cout << "********** CONVERSOR DE TEMPERATURAS **********" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;
    cout << "Ingrese la unidad de temperatura a convertir (F/C): ";
    cin >> op;

    if (op == 'F' || op == 'f') {
        cout << "Ingrese la temperatura en Celsius: ";
        cin >> temp;
        double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        cout << temp << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
    } 
    else if (op == 'C' || op == 'c') {
        cout << "Ingrese la temperatura en Fahrenheit: ";
        cin >> temp;
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        cout << temp << " grados Fahrenheit son " << celsius << " grados Celsius." << endl;
    } 
    else {
        cout << "Unidad no valida. Por favor ingrese 'F' o 'C'." << endl;
    }


    return 0;
}