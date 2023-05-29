#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float A, B, C, x1, x2;

    cout << "Введите коэффициент A: ";
    cin >> A;
    cout << "Введите коэффициент B: ";
    cin >> B;
    cout << "Введите коэффициент C: ";
    cin >> C;

    float D = B * B - 4 * A * C;
    x1 = (-B + sqrt(D)) / (2 * A);
    x2 = (-B - sqrt(D)) / (2 * A);

    cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;

    return 0;
}
