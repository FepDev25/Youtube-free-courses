#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a;
    double b;
    double c;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "La hipotenusa es: " << c << endl;

    return 0;
}