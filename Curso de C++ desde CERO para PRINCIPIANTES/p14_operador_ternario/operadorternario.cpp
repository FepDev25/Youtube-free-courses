#include <iostream>

using namespace std;

int main() {

    int calificacion;
    cout << "Ingrese la calificación (0-100): ";
    cin >> calificacion;

    cout << "El estudiante ha " 
         << (calificacion >= 60 ? "aprobado." : "reprobado.") 
         << endl;

    bool aprobar = (calificacion >= 60) ? true : false;
    cout << "Valor booleano de aprobar: " << aprobar << endl;

    int esPar = (calificacion % 2 == 0) ? 1 : 0;
    cout << "¿La calificación es par? " << (esPar ? "Sí." : "No.") << endl;
    
    return 0;
}