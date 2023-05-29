#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int unit;
    float length;

    cout << "Введите номер единицы длины (1-5): ";
    cin >> unit;

    cout << "Введите длину отрезка: ";
    cin >> length;

    float result;

    switch (unit) {
    case 1:
        result = length / 10;
        cout << "Длина в метрах: " << result << endl;
        break;
    case 2:
        result = length * 1000;
        cout << "Длина в метрах: " << result << endl;
        break;
    case 3:
        result = length;
        cout << "Длина в метрах: " << result << endl;
        break;
    case 4:
        result = length / 1000;
        cout << "Длина в метрах: " << result << endl;
        break;
    case 5:
        result = length / 100;
        cout << "Длина в метрах: " << result << endl;
        break;
    default:
        cout << "Некорректный номер единицы длины!" << endl;
        break;
    }

    return 0;
}
