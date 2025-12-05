#include <iostream>

using namespace std;

enum Dia {
    lunes = 0,
    martes = 1,
    miercoles = 2, 
    jueves = 3, 
    viernes = 4,
    sabado = 5, 
    domingo = 6
};

enum Colores {
    rojo = 'r',
    azul = 'a',
    verde = 'v'
};

int main() {
    
    // Enumeraciones: Pares de constantes enteras nombradas

    Dia hoy = martes;

    switch (hoy)
    {
    case lunes:
        cout << "Es lunes!" << endl;
        break;
    case martes:
        cout << "Es martes!" << endl;
        break;
    case miercoles:
        cout << "Es miercoles!" << endl;
        break;
    case jueves:
        cout << "Es jueves!" << endl;
        break;
    case viernes:
        cout << "Es viernes!" << endl;
        break;
    case sabado:
        cout << "Es sabado!" << endl;
        break;
    case domingo:
        cout << "Es domingo!" << endl;
        break;
    
    default:
        break;
    }

    return 0;
}