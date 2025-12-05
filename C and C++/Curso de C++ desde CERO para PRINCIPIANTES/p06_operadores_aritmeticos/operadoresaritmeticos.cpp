#include <iostream>

using namespace std;

int main(){

    int estudiantes = 30;
    estudiantes += 5; // Ahora hay 35 estudiantes
    estudiantes++;    // Ahora hay 36 estudiantes
    cout << "Total de estudiantes: " << estudiantes << endl;

    int a = 10;
    int b = 3;
    int suma = a + b;          // Suma
    int resta = a - b;         // Resta
    int multiplicacion = a * b; // Multiplicación
    int division = a / b;      // División entera
    int modulo = a % b;       // Módulo

    cout << "A: " << a << ", B: " << b << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División entera: " << division << endl;
    cout << "Módulo: " << modulo << endl;

    double x = 10.0;
    double y = 3.0;
    double division_real = x / y; // División real
    cout << "X: " << x << ", Y: " << y << endl;
    cout << "División real: " << division_real << endl;

    estudiantes = 5 + 7 * 8 + (3+1) - 10; // Uso de paréntesis y precedencia
    cout << "Total de estudiantes después de la expresión compleja: " << estudiantes << endl;

    return 0;

}