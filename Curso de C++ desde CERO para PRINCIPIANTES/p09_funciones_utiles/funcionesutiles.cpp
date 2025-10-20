#include <iostream>
#include <cmath>

using namespace std;

// 8 funciones utiles en C++
int main(){

    double x = 3;
    double y = 4;
    double z;

    // 1. max: devuelve el mayor de dos valores
    z = max(x, y);
    cout << "Maximo de " << x << " y " << y << " es: " << z << endl;

    // 2. min: devuelve el menor de dos valores
    z = min(x, y);
    cout << "Minimo de " << x << " y " << y << " es: " << z << endl;

    // 3. pow: eleva un numero a una potencia
    z = pow(x, y);
    cout << x << " elevado a la " << y << " es: " << z << endl;

    // 4. sqrt: calcula la raiz cuadrada
    z = sqrt(x);
    cout << "La raiz cuadrada de " << x << " es: " << z << endl;

    // 5. abs: valor absoluto
    z = abs(-88);
    cout << "El valor absoluto de " << -88 << " es: " << z << endl;

    // 6. round: redondea al entero mas cercano
    z = round(4.6);
    cout << "Redondeo de 4.6 es: " << z << endl;

    // 7. ceil: redondea hacia arriba
    z = ceil(4.2);
    cout << "Redondeo hacia arriba de 4.2 es: " << z << endl;

    // 8. floor: redondea hacia abajo
    z = floor(4.8);
    cout << "Redondeo hacia abajo de 4.8 es: " << z << endl;


    return 0;
}