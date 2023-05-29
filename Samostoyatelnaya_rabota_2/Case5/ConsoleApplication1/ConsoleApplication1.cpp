#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int operation;
    float a, b;

    cout << "Введите номер действия (1-4): ";
    cin >> operation;

    cout << "Введите числа A и B: ";
    cin >> a >> b;

    float result;

    switch (operation) {
    case 1:
        result = a + b;
        cout << "Сумма: " << result << endl;
        break;
    case 2:
        result = a - b;
        cout << "Разность: " << result << endl;
        break;
    case 3:
        result = a * b;
        cout << "Произведение: " << result << endl;
        break;
    case 4:
        result = a / b;
        cout << "Частное: " << result << endl;
        break;
    default:
        cout << "Некорректный номер действия!" << endl;
        break;
    }

    return 0;
}
