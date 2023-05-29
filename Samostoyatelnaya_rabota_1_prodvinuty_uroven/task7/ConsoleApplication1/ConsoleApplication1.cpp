#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float averageSpeed, distance, travelTime;
    cout << "Введите среднюю скорость движения мотоциклиста (км/ч): ";
    cin >> averageSpeed;
    cout << "Введите расстояние между пунктами А и Б (км): ";
    cin >> distance;
    cout << "Введите время движения из пункта А в пункт Б (ч): ";
    cin >> travelTime;

    float speedAB = (2 * distance) / travelTime;
    float speedBA = (2 * distance) / (travelTime * (averageSpeed / speedAB));

    cout << "Средняя скорость мотоциклиста при движении из пункта А в пункт Б: " << speedAB << " км/ч" << endl;
    cout << "Средняя скорость мотоциклиста при движении из пункта Б в пункт А: " << speedBA << " км/ч" << endl;

    return 0;
}
