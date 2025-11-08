#include <iostream>

int factorial(int);

using namespace std;

int main() {
    
    // Recursion: funcion que se llama a si mismo
    for (int i = 0; i < 9; i++){
        int fact = factorial(i);
        cout << "El factorial de " << i << " es: " << fact << endl;
    }
    

    return 0;
}

int factorial (int i){
    if (i == 0){
        return 1;
    } 
    return i * factorial(i-1);
}
