#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int element;
    float value;

    cout << "Введите номер элемента равнобедренного прямоугольного треугольника (1-4): ";
    cin >> element;

    cout << "Введите значение элемента: ";
    cin >> value;

    float a, c, h, S;

    switch (element) {
    case 1:
        a = value;
        c = a * sqrt(2);
        h = c / 2;
        S = c * h / 2;
        break;
    case 2:
        c = value;
        a = c / sqrt(2);
        h = c / 2;
        S = c * h / 2;
        break;
    case 3:
        h = value;
        c = 2 * h;
        a = c / sqrt(2);
        S = c * h / 2;
        break;
    case 4:
        S = value;
        h = sqrt(2 * S);
        c = 2 * h;
        a = c / sqrt(2);
        break;
    default:
        cout << "Ошибка: некорректный номер элемента.";
        return 0;
    }

    cout << "Катет a: " << a << endl;
    cout << "Гипотенуза c: " << c << endl;
    cout << "Высота h: " << h << endl;
    cout << "Площадь S: " << S << endl;

    return 0;
}
