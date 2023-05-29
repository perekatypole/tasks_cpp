#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float a, P;

    cout << "Введите сторону квадрата a: ";
    cin >> a;

    P = 4 * a;

    cout << "Периметр квадрата: " << P << endl;

    return 0;
}
