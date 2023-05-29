#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float frequency, amplitude, k;
    cout << "Введите частоту маятника (Гц): ";
    cin >> frequency;
    cout << "Введите амплитуду маятника (м): ";
    cin >> amplitude;
    cout << "Введите параметр k: ";
    cin >> k;

    float x = amplitude / k;
    float T = acos(x) / (2 * M_PI * frequency);

    cout << "Отклонение маятника максимально в момент времени T = " << T << " сек" << endl;

    return 0;
}
