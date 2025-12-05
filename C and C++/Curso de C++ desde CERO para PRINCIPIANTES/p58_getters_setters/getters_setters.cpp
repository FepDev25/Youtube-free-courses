#include <iostream>

using namespace std;

class Estufa{
    private:
        int temperatura = 0;

    public:
        Estufa(){}

        Estufa(int temperatura){
            this->setTemperatura(temperatura);
        }

        int getTemperatura(){
            return this->temperatura;
        }

        void setTemperatura(int newTemp){
            this->temperatura = newTemp;
        }

        void mostrarTemperatura(){
            cout << "Temperatura: "<< this->getTemperatura() << endl;
        }
};

// Getter: Hacen que un atributo provado sea legible
// Setter: Hacen que un atributo privada sea escribible
int main() {

    Estufa estf1(10);
    estf1.mostrarTemperatura();

    Estufa estf2;
    estf2.mostrarTemperatura();
    estf2.setTemperatura(80);
    estf2.mostrarTemperatura();

    
    
    return 0;
}