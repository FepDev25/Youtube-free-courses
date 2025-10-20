#include <iostream>

namespace primero {
    int x = 10;
}

namespace segundo {
    int x = 20;
}

int main(){
    // Usando el namespace segundo
    using namespace segundo;
    std::cout << "Variable x: " << x << std::endl;

    // Si quiero usar la variable x del namespace primero
    std::cout << "Variable x en namespace primero: " << primero::x << std::endl;

    using namespace std;
    cout << "Usando namespace std para imprimir esto." << endl;

    // Se puede seleccionar lo que vamos a ocupar unicamente
    using std::cout;
    using std::endl;
    using std::string;
    
    string mensaje = "Hola desde el namespace std!";
    cout << mensaje << endl;

    return 0;
}
