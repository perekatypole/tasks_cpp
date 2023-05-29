#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double V, S, U;
    cout << "Введите скорость лодки (V): ";
    cin >> V;
    cout << "Введите расстояние между пунктами (S): ";
    cin >> S;
    cout << "Введите скорость течения реки (U): ";
    cin >> U;

    double T_downstream = S / (V + U);
    double T_upstream = S / (V - U);
    double T = T_downstream + T_upstream;

    cout << "Общее время движения лодки: " << T << endl;

    return 0;
}
