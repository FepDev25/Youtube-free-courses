#include <iostream>

using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x >= y) ? x : y;
}

template <typename T, typename U>
auto myMaxTwo(T x, U y){ // El compilador deduce el tipo de retorno
    return (x >= y) ? x : y;
}

int main() {
    int maxN = myMax(13, 10);
    cout << maxN << endl;

    double maxNDouble = myMax(13.5, 14.5);
    cout << maxNDouble << endl;

    double maxChar = myMax('q', 'a');
    cout << maxChar << endl;

    double maxNDouble2 = myMaxTwo(2.4, 1);
    cout << maxNDouble2 << endl;

    return 0;
}