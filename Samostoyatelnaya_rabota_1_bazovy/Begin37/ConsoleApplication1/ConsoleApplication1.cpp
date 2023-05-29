#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float V1, V2, S, T, distance;

    cout << "Введите скорость первого автомобиля (V1 км/ч): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля (V2 км/ч): ";
    cin >> V2;
    cout << "Введите начальное расстояние между автомобилями (S км): ";
    cin >> S;
    cout << "Введите время (T ч): ";
    cin >> T;

    distance = abs(S - (V1 + V2) * T);

    cout << "Расстояние между автомобилями через " << T << " ч равно: " << distance << " км" << endl;

    return 0;
}
