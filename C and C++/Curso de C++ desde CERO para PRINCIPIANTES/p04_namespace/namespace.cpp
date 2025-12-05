#include <iostream>

namespace primero {
    int x = 10;
}

namespace segundo {
    int x = 20;
}

int main(){
    int x = 0;

    // Operador de resolución de ámbito es ::
    
    std::cout << "Variable local x: " << x << std::endl;
    std::cout << "Variable x en namespace primero: " << primero::x << std::endl;
    std::cout << "Variable x en namespace segundo: " << segundo::x << std::endl;

    return 0;
}
