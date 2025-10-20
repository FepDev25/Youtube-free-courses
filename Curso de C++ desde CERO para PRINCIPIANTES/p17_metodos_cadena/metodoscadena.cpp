#include <iostream>

using namespace std;

int main() {

    string nombre = "Felipe Peralta";
    cout << "El nombre es: " << nombre << endl;

    int longitud = nombre.length();
    cout << "La longitud del nombre es: " << longitud << endl;

    bool esVacio = nombre.empty();
    cout << "¿El nombre está vacío? " << (esVacio ? "Sí" : "No") << endl;

    nombre.append(" Peralta");
    cout << "Después de append, el nombre es: " << nombre << endl;

    char charpos = nombre.at(0);
    cout << "El carácter en la posición 0 es: " << charpos << endl;

    nombre.insert(0, "Hola, ");
    cout << "Después de insert, el nombre es: " << nombre << endl;

    int pos = nombre.find("Peralta");
    cout << "La posición de 'Peralta' es: " << pos << endl;

    nombre.erase(0, 6); // Elimina "Hola, "
    cout << "Después de erase, el nombre es: " << nombre << endl;

    nombre.clear();
    cout << "Después de clear, ¿el nombre está vacío? " << (nombre.empty() ? "Sí" : "No") << endl;

    

    return 0;
}