#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float d, L;
    const float pi = 3.14;

    cout << "Введите диаметр окружности d: ";
    cin >> d;

    L = pi * d;

    cout << "Длина окружности: " << L << endl;

    return 0;
}
