#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double H, U, S;
    cout << "Введите высоту над землей (H): ";
    cin >> H;
    cout << "Введите скорость самолета (U): ";
    cin >> U;

    double t = 2 * H / U;
    S = U * t;

    cout << "Подлетное расстояние до объекта: " << S << endl;

    return 0;
}
