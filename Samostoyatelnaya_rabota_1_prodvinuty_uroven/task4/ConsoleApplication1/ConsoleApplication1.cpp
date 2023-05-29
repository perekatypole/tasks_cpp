#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double H, V, alpha, t, M_PI=3.14;
    cout << "Введите высоту обрыва (H): ";
    cin >> H;
    cout << "Введите начальную скорость (V): ";
    cin >> V;
    cout << "Введите угол броска (α): ";
    cin >> alpha;
    cout << "Введите время (t): ";
    cin >> t;

    double alphaRad = alpha * M_PI / 180.0;
    double g = 9.81; // ускорение свободного падения

    double T = (2 * V * sin(alphaRad)) / g;
    double x = H - V * T * cos(alphaRad);
    double y = V * T * sin(alphaRad);

    x = (x < 0) ? 0 : x; // Если камень упал на дно обрыва, то x = 0

    cout << "Положение камня:" << endl;
    cout << "Высота от дна обрыва (x): " << x << endl;
    cout << "Расстояние до края обрыва (y): " << y << endl;

    return 0;
}
