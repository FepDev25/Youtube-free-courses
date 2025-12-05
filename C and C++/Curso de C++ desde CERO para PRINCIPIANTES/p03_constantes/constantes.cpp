#include <iostream>

int main(){

    const double PI = 3.141592;
    double radio = 10;
    double circunferencia = 2 * PI * radio;
    std::cout << circunferencia << " centimetros" << std::endl;

    const int VELOCIDAD_LUZ = 299792458; // en metros por segundo
    std::cout << "La velocidad de la luz es " << VELOCIDAD_LUZ  << " metros por segundo" << std::endl;
    
    return 0;

}