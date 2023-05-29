#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float time, acceleration, distanceUniform, distanceDeceleration;
    cout << "Введите время движения поезда (сек): ";
    cin >> time;
    cout << "Введите ускорение при равнозамедленном движении поезда (м/с^2): ";
    cin >> acceleration;

    distanceUniform = (time * time * acceleration) / 2;
    distanceDeceleration = distanceUniform;

    float totalDistance = distanceUniform + distanceDeceleration;

    cout << "Путь, пройденный поездом: " << totalDistance << " м" << endl;

    return 0;
}
