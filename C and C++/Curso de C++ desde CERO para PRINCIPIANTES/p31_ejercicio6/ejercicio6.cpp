#include <iostream>

using namespace std;

char eleccionUsuario();
char eleccionMaquina();
string obtenerSeleccion(char eleccion);

// Piedra (p), Papel (a), Tijera (t)

int main() {

    char opcionUsuario, opcionMaquina;

    while (true){
        opcionUsuario = eleccionUsuario();
        opcionMaquina = eleccionMaquina();

        cout << "La maquina eligio: " << obtenerSeleccion(opcionMaquina) << endl;

        if (opcionUsuario == opcionMaquina) {
            cout << "Empate!" << endl;
        } else if ((opcionUsuario == 'p' && opcionMaquina == 't') ||
                   (opcionUsuario == 'a' && opcionMaquina == 'p') ||
                   (opcionUsuario == 't' && opcionMaquina == 'a')) {
            cout << "Ganaste!" << endl;
        } else {
            cout << "Perdiste!" << endl;
        }
    }

    return 0;
}

char eleccionUsuario() {
    char eleccion;
    cout << "Elige piedra (p), papel (a) o tijera (t): ";
    cin >> eleccion;
    return eleccion;
}

char eleccionMaquina() {

    srand(time(0)); // Inicializa la semilla para números aleatorios
    char eleccion;
    int numeroAleatorio = rand() % 3; // Genera un número aleatorio entre 0 y 2

    switch (numeroAleatorio) {
        case 0:
            eleccion = 'p'; // piedra
            break;
        case 1:
            eleccion = 'a'; // papel
            break;
        case 2:
            eleccion = 't'; // tijera
            break;
    }
    return eleccion;
}

string obtenerSeleccion(char eleccion) {
    switch (eleccion) {
        case 'p':
            return "Piedra";
        case 'a':
            return "Papel";
        case 't':
            return "Tijera";
        default:
            return "Elección inválida";
    }
}

