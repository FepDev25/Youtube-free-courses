#include <iostream>
#include <ctime>

void dibujarTablero(char *espacios);
void turnoJugador(char *espacios, char jugador);
void turnoComputadora(char *espacios, char computadora);
bool verificarGanador(char *espacios, char jugador, char computadora);
bool verificarEmpate(char *espacios);

using namespace std;

int main() {

    char espacios[9] = {' ', ' ',' ',' ',' ',' ',' ',' ',' '};
    char jugador = 'X';
    char computadora = 'O';

    do
    {   
        dibujarTablero(espacios);
        turnoJugador(espacios, jugador);

        if (verificarGanador(espacios, jugador, computadora)){
            dibujarTablero(espacios);
            break;
        }

        if (verificarEmpate(espacios)){
            dibujarTablero(espacios);
            cout << "Empate!" << "\n";
            break;
        }   

        turnoComputadora(espacios, computadora);

        if (verificarGanador(espacios, jugador, computadora)){
            dibujarTablero(espacios);
            break;
        }

        if (verificarEmpate(espacios)){
            dibujarTablero(espacios);
            cout << "Empate!" << "\n";
            break;
        }
        

    } while (true);

    return 0;
}

void dibujarTablero(char *espacios){
    cout << " " << espacios[0] << " | " << espacios[1] << " | " << espacios[2] << " " << endl;
    cout << "-----------" << endl;
    cout << " " << espacios[3] << " | " << espacios[4] << " | " << espacios[5] << " " << endl;
    cout << "-----------" << endl;
    cout << " " << espacios[6] << " | " << espacios[7] << " | " << espacios[8] << " " << endl;
}

void turnoJugador(char *espacios, char jugador){
    int numero;

    while (true){
        cout << "Ingresa una casilla a jugar (1-9):";
        cin >> numero;
        numero --;

        if (espacios[numero] == ' '){
            espacios[numero] = jugador;
            break;
        }
    }

    
}

void turnoComputadora(char *espacios, char computadora){
    int numero;
    srand(time(0));

    while (true){
        numero = rand() % 9;
        if (espacios[numero] == ' '){
            espacios[numero] = computadora;
            break;
        }
    }
}

bool verificarGanador(char *espacios, char jugador, char computadora){

    if ( (espacios[0] != ' ') && (espacios[0] == espacios[1]) && (espacios[1]==espacios[2]) ){
        cout << "Ganaste! " << (espacios[0] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[3] != ' ') && (espacios[3] == espacios[4]) && (espacios[4]==espacios[5]) ){
        cout << "Ganaste! " << (espacios[3] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[6] != ' ') && (espacios[6] == espacios[7]) && (espacios[7]==espacios[8]) ){
        cout << "Ganaste! " << (espacios[6] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[0] != ' ') && (espacios[0] == espacios[3]) && (espacios[3]==espacios[6]) ){
        cout << "Ganaste! " << (espacios[0] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[1] != ' ') && (espacios[1] == espacios[4]) && (espacios[4]==espacios[7]) ){
        cout << "Ganaste! " << (espacios[1] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[2] != ' ') && (espacios[2] == espacios[5]) && (espacios[5]==espacios[8]) ){
        cout << "Ganaste! " << (espacios[2] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[0] != ' ') && (espacios[0] == espacios[4]) && (espacios[4]==espacios[8]) ){
        cout << "Ganaste! " << (espacios[0] == jugador ? jugador : computadora) << "\n";
        return true;
    } else if ( (espacios[2] != ' ') && (espacios[2] == espacios[4]) && (espacios[4]==espacios[6]) ){
        cout << "Ganaste! " << (espacios[6] == jugador ? jugador : computadora) << "\n";
        return true;
    }

    return false;
}

bool verificarEmpate(char *espacios){

    for (int i = 0; i < 9; i++){
        if (espacios[i] == ' '){
            return false;
        }
    }

    return true;
}
