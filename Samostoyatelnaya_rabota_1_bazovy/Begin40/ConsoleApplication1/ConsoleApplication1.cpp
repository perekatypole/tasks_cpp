#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float A1, B1, C1, A2, B2, C2, x, y;

    cout << "Введите коэффициенты первого уравнения (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэффициенты второго уравнения (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    float D = A1 * B2 - A2 * B1;
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - A2 * C1) / D;

    cout << "Решение системы уравнений: x = " << x << ", y = " << y << endl;

    return 0;
}
