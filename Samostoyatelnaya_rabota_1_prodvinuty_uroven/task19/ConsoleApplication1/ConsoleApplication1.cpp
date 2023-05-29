#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double initialN, decayPeriod, deltaN, percentageDeltaN;
    cout << "Введите начальное количество ядер (N): ";
    cin >> initialN;
    cout << "Введите период полураспада (Т): ";
    cin >> decayPeriod;
    cout << "Введите время (t): ";
    cin >> deltaN;

    // Вычисление числа распавшихся ядер (ΔN) за время t
    deltaN = initialN * (1 - pow(0.5, deltaN / decayPeriod));
    percentageDeltaN = (deltaN / initialN) * 100;

    cout << "Число распавшихся ядер (ΔN): " << deltaN << endl;
    cout << "Процентное отношение ΔN к начальному количеству ядер N: " << percentageDeltaN << "%" << endl;

    return 0;
}
