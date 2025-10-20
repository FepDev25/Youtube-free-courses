#include <iostream>

using namespace std;

int main() {

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << "Ganaste una PS5" << endl;
        break;
    case 2:
        cout << "Ganaste un Xbox Series X" << endl;
        break;
    case 3:
        cout << "Ganaste un Nintendo Switch" << endl;
        break;
    case 4:
        cout << "Ganaste un viaje a Cancún" << endl;
        break;
    case 5:
        cout << "Ganaste un viaje a Nueva York" << endl;
        break;
    case 6:
        cout << "Ganaste un viaje a Las Vegas" << endl;
        break;
    default:
        break;
    }

    return 0;
}