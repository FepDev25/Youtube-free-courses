#include <iostream>

using namespace std;

class Estudiante{
    public:
        string nombre;
        int edad;
        double promedio;

        Estudiante(string nombre, int edad, double promedio){
            this->nombre = nombre;
            this->edad = edad;
            this->promedio = promedio;
        }

        void mostrarInfo(){
            cout << "Estudiante: " << this->nombre << ", edad: " << this->edad << " y el promedio es: " << this->promedio << endl;
        }
};

int main() {

    Estudiante est1("Felipe", 20, 9.2);
    Estudiante est2("Emilia", 21, 8.8);

    est1.mostrarInfo();
    est2.mostrarInfo();
    
    return 0;
}