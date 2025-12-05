#include <iostream>

using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    int nota;
    cout << "Ingrese su nota (0-100): ";
    cin >> nota;

    if (nota >= 90 && nota <= 100) {
        cout << "Tu calificación es A." << endl;
    } else if (nota >= 80) {
        cout << "Tu calificación es B." << endl;
    } else if (nota >= 70) {
        cout << "Tu calificación es C." << endl;
    } else if (nota >= 60) {
        cout << "Tu calificación es D." << endl;
    } else if (nota >= 0) {
        cout << "Tu calificación es F." << endl;
    } else {
        cout << "Nota inválida." << endl;
    }

    return 0;
}