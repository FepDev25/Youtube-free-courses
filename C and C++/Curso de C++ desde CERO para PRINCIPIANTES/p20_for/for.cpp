#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        cout << "Iteración " << i << endl;
    }

    for (int i = 10; i > 0; i--){
        cout << "Contando hacia atrás: " << i << endl;
    }

    for (int i = 0; i <= 20; i+=2){
        cout << "Número par: " << i << endl;
    }
    
    

    return 0;
}