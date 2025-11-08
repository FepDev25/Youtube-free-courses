#include <iostream>

using namespace std;

struct estudiante {
    // miembros
    string nombre;
    double promedio;
    bool inscripto;
};

int main() {
    
    // structura: almacena variables relacionadas bajo un mismo nombre

    estudiante estudiante1;
    estudiante1.nombre = "Felipe";
    estudiante1.promedio = 8.1;
    estudiante1.inscripto = true;

    cout << "**** Estudiante 1 ****" << endl;
    cout << estudiante1.nombre << endl;
    cout << estudiante1.promedio << endl;
    cout << estudiante1.inscripto << endl;

    estudiante estudiante2;
    estudiante2.nombre = "Emilia";
    estudiante2.promedio = 10;
    estudiante2.inscripto = true;

    cout << "**** Estudiante 1 ****" << endl;
    cout << estudiante2.nombre << endl;
    cout << estudiante2.promedio << endl;
    cout << estudiante2.inscripto << endl;

    estudiante estudiante3;
    estudiante3.nombre = "Pedrito";
    estudiante3.promedio = 0.2;
    estudiante3.inscripto = false;

    cout << "**** Estudiante 3 ****" << endl;
    cout << estudiante3.nombre << endl;
    cout << estudiante3.promedio << endl;
    cout << estudiante3.inscripto << endl;


    return 0;
}