#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float a, S;

    cout << "Введите сторону квадрата a: ";
    cin >> a;

    S = a * a;

    cout << "Площадь квадрата: " << S << endl;

    return 0;
}
