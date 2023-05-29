#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double v, V;
    cout << "Введите частоту фотона v: ";
    cin >> v;
    cout << "Введите скорость электрона на выходе V: ";
    cin >> V;

    double A = (v >= V) ? (6.62607015e-34 * v) - (0.5 * 9.10938356e-31 * V * V) : 0;

    cout << "Работа выхода электрона A: " << A << endl;

    return 0;
}
