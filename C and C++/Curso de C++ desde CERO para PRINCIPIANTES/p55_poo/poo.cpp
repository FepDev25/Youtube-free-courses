#include <iostream>


class Humano{
    public:
        std::string nombre  = "Persona"; // valores por defecto
        std::string ocupacion = "";
        int edad = 0;

        void comer(){
            std::cout << nombre << " está comiendo." << std::endl;
        }

        void beber(){
            std::cout << nombre << " está bebiendo." << std::endl;
        }

        void dormir(){
            std::cout << nombre << " está durmiendo." << std::endl;
        }
};

class Automovil{
    public:
        std::string marca;
        std::string modelo;
        int anio;
        std::string color;

        void encender(){
            std::cout << "Encendiendo auto..." << std::endl;
        }
};

int main() {

    Humano humano1;
    humano1.nombre = "Felipe";
    humano1.edad = 20;
    humano1.ocupacion = "Programador";
    humano1.comer();
    humano1.beber();
    humano1.dormir();

    Humano humano2;
    humano2.nombre = "Emilia";
    humano2.edad = 21;
    humano2.ocupacion = "Doctora";
    humano2.comer();
    humano2.beber();
    humano2.dormir();

    Automovil automovil1;
    automovil1.modelo = "Mustang";
    automovil1.marca = "Ford";
    automovil1.color = "azul";
    automovil1.anio = 2024;
    automovil1.encender();
    
    return 0;
}