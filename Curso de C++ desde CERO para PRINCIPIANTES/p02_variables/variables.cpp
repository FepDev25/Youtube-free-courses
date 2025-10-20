#include <iostream>

int main(){
    
    // **** Enteros ****
    // Primero declarar y luego asignar valor
    int x;
    x = 5;

    std::cout<< x << std::endl;
    
    // Declarar e inicializar a la vez
    int y = 8;

    std::cout << y << std::endl;

    int suma = x + y;
    int edad = 20;
    int anio = 2025;

    std::cout << suma << std::endl;
    std::cout << edad << std::endl;
    std::cout << anio << std::endl;


    // **** Flotantes ****

    double precio = 4.99; // Usa 64 bits
    double promedio = 2.5;
    double temp = 17.8;

    float precio2 = 76.1; // Usa 32 bits

    std::cout << precio << " " << promedio << " " << temp << " " << precio2 << "\n";

    // **** Characters ****
    char calificacion = 'A';
    char incial = 'F';

    std::cout << calificacion << " " << incial << "\n";

    // **** Booleano ****
    bool estudiante = true;
    bool encendido = false;

    std::cout << estudiante << " " << encendido << "\n";

    // **** String ****
    std::string nombre = "Felipe Peralta";
    std::string frase = "La vida es dura pero mas dura es mi verdura";
    
    std::cout << "Hola " << nombre << "\n";
    std::cout << frase << std::endl;
    return 0;

}
