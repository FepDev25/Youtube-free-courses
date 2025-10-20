#include <iostream>

int main(){

    // Implicita
    int enteropi = 3.14; // El valor decimal se trunca
    std::cout << "Valor de enteropi (implicita): " << enteropi << std::endl;

    char x = 100; // Asignación de un valor entero a un char
    std::cout << "Valor de x (implicita): " << x << std::endl;

    // Explicita
    double pi = 3.14;
    int enteropi2 = (int)pi; // Conversión explícita
    std::cout << "Valor de enteropi2 (explicita): " << enteropi2 << std::endl;

    int y = 115;
    std::cout << "Valor de y (explicita): " << (char)y << std::endl;

    int correctas = 8;
    int preguntas = 10;
    double porcentaje = (double)correctas / preguntas * 100; // Conversión explícita
    std::cout << "Porcentaje de respuestas correctas: " << porcentaje << "%";

    return 0;
}