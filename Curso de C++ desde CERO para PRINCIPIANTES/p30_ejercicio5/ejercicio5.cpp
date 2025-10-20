#include <iostream>
#include <iomanip>

using namespace std;

// Sistema bancario simple

void mostrarSaldo(double saldo);
double depositar(double monto);
double retirar(double monto);

int main() {
    double saldo = 0.0;
    char opc = '0';

    cout << "Bienvenido al sistema bancario simple" << endl;

    while (opc != '4'){
        cout << "********** Menu **********" << endl;
        cout << "1. Mostrar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opc;

        switch (opc)
        {
        case '1':
            mostrarSaldo(saldo);
            break;
        case '2':
            saldo = depositar(saldo);
            break;
        case '3':
            saldo = retirar(saldo);
            break;
        case '4':
            cout << "Gracias por usar el sistema bancario. Adios!" << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor intente de nuevo." << endl;
            break;
        }
    }

    return 0;
}

void mostrarSaldo(double saldo) {
    cout << "Su saldo actual es: $" << setprecision(2) << fixed << saldo << endl;
}

double depositar(double saldo) {
    double monto;
    cout << "Ingrese el monto a depositar: $";
    cin >> monto;
    if (monto > 0) {
        saldo += monto;
        cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Monto invalido. El deposito debe ser mayor a cero." << endl;
    }
    return saldo;
}

double retirar(double saldo) {
    double monto;
    cout << "Ingrese el monto a retirar: $";
    cin >> monto;
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Monto invalido. El retiro debe ser mayor a cero y menor o igual al saldo." << endl;
    }
    return saldo;
}