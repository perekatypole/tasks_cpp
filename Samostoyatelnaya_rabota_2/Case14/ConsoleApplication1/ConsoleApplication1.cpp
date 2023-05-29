#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int element;
    float value;

    cout << "Введите номер элемента треугольника (1-4): ";
    cin >> element;

    cout << "Введите значение элемента: ";
    cin >> value;

    float side, radius1, radius2, area;

    switch (element) {
    case 1:
        side = value;
        radius1 = side * sqrt(3) / 6;
        radius2 = 2 * radius1;
        area = side * side * sqrt(3) / 4;
        break;
    case 2:
        radius1 = value;
        side = radius1 * 6 / sqrt(3);
        radius2 = 2 * radius1;
        area = side * side * sqrt(3) / 4;
        break;
    case 3:
        radius2 = value;
        radius1 = radius2 / 2;
        side = radius1 * 6 / sqrt(3);
        area = side * side * sqrt(3) / 4;
        break;
    case 4:
        area = value;
        side = sqrt(area * 4 / sqrt(3));
        radius1 = side * sqrt(3) / 6;
        radius2 = 2 * radius1;
        break;
    default:
        cout << "Ошибка: некорректный номер элемента.";
    }

    cout << "Сторона: " << side << endl;
    cout << "Радиус вписанной окружности: " << radius1 << endl;
    cout << "Радиус описанной окружности: " << radius2 << endl;
    return 0;
}
