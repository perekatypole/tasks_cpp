#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int element;
    float value;

    cout << "Введите номер элемента окружности (1-4): ";
    cin >> element;

    cout << "Введите значение элемента: ";
    cin >> value;

    float radius, diameter, length, area;

    switch (element) {
    case 1:
        radius = value;
        diameter = 2 * radius;
        length = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;
        break;
    case 2:
        diameter = value;
        radius = diameter / 2;
        length = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;
        break;
    case 3:
        length = value;
        radius = length / (2 * 3.14);
        diameter = 2 * radius;
        area = 3.14 * radius * radius;
        break;
    case 4:
        area = value;
        radius = sqrt(area / 3.14);
        diameter = 2 * radius;
        length = 2 * 3.14 * radius;
        break;
    default:
        cout << "Ошибка: некорректный номер элемента.";
        return 0;
    }

    cout << "Радиус: " << radius << endl;
    cout << "Диаметр: " << diameter << endl;
    cout << "Длина: " << length << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}
