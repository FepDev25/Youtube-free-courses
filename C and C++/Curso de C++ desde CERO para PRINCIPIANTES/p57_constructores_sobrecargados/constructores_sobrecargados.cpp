#include <iostream>

using namespace std;

// Sobrecarga de constructores
class Pizza{
    // Los clientes pueden elegir de 1 a 3 ingredientes para sus pizzas!

    public:
        string ingrediente1 = "";
        string ingrediente2 = "";
        string ingrediente3 = "";

        Pizza(){
            // Constructor vacío
        }
    
        Pizza(string ingrediente1){
            this->ingrediente1 = ingrediente1;
        }

        Pizza(string ingrediente1, string ingrediente2){
            this->ingrediente1 = ingrediente1;
            this->ingrediente2 = ingrediente2;
        }

        Pizza(string ingrediente1, string ingrediente2, string ingrediente3){
            this->ingrediente1 = ingrediente1;
            this->ingrediente2 = ingrediente2;
            this->ingrediente3 = ingrediente3;
        }

        void mostrarIngredientes(){
            cout << "Ingredientes de la pizza: " << endl;
            if(this->ingrediente1 != ""){
                cout << "- " << this->ingrediente1 << endl;
            }
            if(this->ingrediente2 != ""){
                cout << "- " << this->ingrediente2 << endl;
            }
            if(this->ingrediente3 != ""){
                cout << "- " << this->ingrediente3 << endl;
            }
        }

};

int main() {

    Pizza pizz1("Pepperoni");
    Pizza pizz2("Jamón", "Piña");
    Pizza pizz3("Champiñones", "Cebolla", "Pimiento");

    pizz1.mostrarIngredientes();
    pizz2.mostrarIngredientes();
    pizz3.mostrarIngredientes();


    return 0;
}