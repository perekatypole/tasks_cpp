// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float V, U, T1, T2, S;

    cout << "Введите скорость лодки в стоячей воде (V км/ч): ";
    cin >> V;
    cout << "Введите скорость течения реки (U км/ч): ";
    cin >> U;
    cout << "Введите время движения лодки по озеру (T1 ч): ";
    cin >> T1;
    cout << "Введите время движения лодки по реке против течения (T2 ч): ";
    cin >> T2;

    S = (V * T1) + (V - U) * T2;

    cout << "Путь, пройденный лодкой: " << S << " км" << endl;

    return 0;
}
