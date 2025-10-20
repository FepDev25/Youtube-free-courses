#include <iostream>

using namespace std;

int sumar(int a, int b) {
    return a + b;
}

double areaCuadrado(double lado);

string devolverHoraString() {
    time_t ahora = time(0);
    char* dt = ctime(&ahora);
    return string(dt);
}

double volumenCubo(double lado) {
    return lado * lado * lado;
}

string unirNombreProfesion(string nombre, string profesion) {
    return nombre + " es " + profesion;
}

int main() {
    int resultado = sumar(5, 10);
    cout << "La suma es: " << resultado << endl;

    double area = areaCuadrado(5.0);
    cout << "El área del cuadrado es: " << area << endl;

    string horaActual = devolverHoraString();
    cout << "La hora actual es: " << horaActual << endl;

    double volumen = volumenCubo(3.0);
    cout << "El volumen del cubo es: " << volumen << endl;

    string descripcion = unirNombreProfesion("Felipe", "ingeniero");
    cout << descripcion << endl;

    return 0;
}

double areaCuadrado(double lado) {
    return lado * lado;
}