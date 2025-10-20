#include <iostream>

using namespace std;

int main() {

    // && (AND lógico)
    // || (OR lógico)
    // ! (NOT lógico)

    bool a = true;
    bool b = false;
    cout << "Valores booleanos: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;
    cout << "!b: " << (!b) << endl;

    return 0;
}