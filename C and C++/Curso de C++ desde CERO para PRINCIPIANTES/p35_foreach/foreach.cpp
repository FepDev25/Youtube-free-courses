#include <iostream>

using namespace std;

int main() {

    string estudiantes[] = {"Ana", "Luis", "Carlos", "Marta", "Sofía"};
    for(string estudiante : estudiantes) {
        cout << "Estudiante: " << estudiante << endl;
    }

    int notas[] = {85, 90, 78, 92, 88};
    for(int nota : notas) {
        cout << "Nota: " << nota << endl;
    }

    return 0;
}