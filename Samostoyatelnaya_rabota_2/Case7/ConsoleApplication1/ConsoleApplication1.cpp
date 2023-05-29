#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int unit;
    float weight;

    cout << "Введите номер единицы массы (1-5): ";
    cin >> unit;

    cout << "Введите массу тела: ";
    cin >> weight;

    float result;

    switch (unit) {
    case 1:
        result = weight;
        cout << "Масса в килограммах: " << result << endl;
        break;
    case 2:
        result = weight / 1000000;
        cout << "Масса в килограммах: " << result << endl;
        break;
    case 3:
        result = weight / 1000;
        cout << "Масса в килограммах: " << result << endl;
        break;
    case 4:
        result = weight * 1000;
        cout << "Масса в килограммах: " << result << endl;
        break;
    case 5:
        result = weight * 100;
        cout << "Масса в килограммах: " << result << endl;
        break;
    default:
        cout << "Некорректный номер единицы массы!" << endl;
        break;
    }

    return 0;
}
