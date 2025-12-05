#include <iostream>
#include <vector>

using namespace std;

// Typedef utilixada para crear un nombre adicional para otro tipo de dato. Ayuda con la legibilidad del código
typedef std::vector<std::pair<std::string, int>> pair_list_t;
typedef std::string str_t;

// Usando using
using numero_t = int;

int main(){

    pair_list_t myList;
    
    str_t name = "Felipe";
    cout << "Name: " << name << endl;

    numero_t age = 30;
    cout << "Age: " << age << endl;

    return 0;
}