#include <iostream>

using namespace std;

// Juego de preguntas
int main() {
    
    string preguntas[5] = {
        "1. Cual es el mejor framework de Java para desarrollo web?",
        "2. Cual es el lenguaje de programacion predecesor de C++?",
        "3. Cual es el sistema operativo mas utilizado en servidores?",
        "4. Cual es el motor de base de datos mas popular?",
        "5. Cual es el lenguaje de programacion mas utilizado para desarrollo movil?"    
    };

    string opciones[5][4] = {
        {"A) Spring", "B) Django", "C) Ruby on Rails", "D) Laravel"},
        {"A) C", "B) Java", "C) Python", "D) Pascal"},
        {"A) Windows Server", "B) Linux", "C) macOS", "D) Unix"},
        {"A) MySQL", "B) PostgreSQL", "C) MongoDB", "D) SQLite"},
        {"A) Java", "B) Swift", "C) Kotlin", "D) JavaScript"}
    };

    char respuestas[5] = {'A', 'A', 'B', 'B', 'C'};

    int tam = sizeof(preguntas) / sizeof(preguntas[0]);
    char respuestaUsuario;
    int puntaje = 0;

    for (int i = 0; i < tam; i++) {

        cout << "----------------------------------" << endl;
        cout << preguntas[i] << endl;

        int tamOpciones = sizeof(opciones[i]) / sizeof(opciones[i][0]);
        for (int j = 0; j < tamOpciones; j++) {
            cout << opciones[i][j] << endl;
        }
        cout << "Ingrese su respuesta (A, B, C, D): ";
        cin >> respuestaUsuario;

        if (toupper(respuestaUsuario) == respuestas[i]) {
            cout << "Respuesta correcta!" << endl;
            puntaje++;
        } else {
            cout << "Respuesta incorrecta. La respuesta correcta era: " << respuestas[i] << endl;
        }
    }

    cout << "Su puntaje final es: " << puntaje << " de " << tam << endl;

    return 0;
}