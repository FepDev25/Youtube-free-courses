#include <iostream>

using namespace std;

class Animal{
    public:
        bool vivo = true;

        void comer(){
            cout << "Comiendo.." << endl;
        }

};

class Perro : public Animal {

    public: 
        void ladrar(){
            cout << "Ladrando.." << endl;
        }


};

class Gato : public Animal {
    public:

        void maullar(){
            cout << "Maullando.." << endl;
        }
};

int main() {

    cout << "*** Perro *** " << endl;
    Perro perro;
    cout << perro.vivo << endl;
    perro.comer();
    perro.ladrar();

    cout << "*** Gato *** " << endl;
    Gato gato;
    cout << gato.vivo << endl;
    gato.comer();
    gato.maullar();

    return 0;
}