#include <iostream>

using namespace std;

int main(){

    char op;
    double num1, num2, resultado;

    cout << "***** Calculadora *****" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '/':
        if (num2 != 0){
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        }
        else{
            cout << "Error: Division por cero no permitida." << endl;
        }
        break;
    default:
        cout << "Operacion no valida." << endl;
    }


    return 0;

}