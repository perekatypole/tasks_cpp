#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double p1, p2, v1, v2;
    cout << "Введите давление газа при объеме V1: ";
    cin >> p1;
    cout << "Введите давление газа при объеме V2: ";
    cin >> p2;
    cout << "Введите объем под поршнем V1: ";
    cin >> v1;
    cout << "Введите объем под поршнем V2: ";
    cin >> v2;

    double V = ((p1 * v2) - (p2 * v1)) / (p2 - p1);
    V = (V < 0) ? 0 : V;

    cout << "Объем сыпучего вещества V: " << V << endl;

    return 0;
}
