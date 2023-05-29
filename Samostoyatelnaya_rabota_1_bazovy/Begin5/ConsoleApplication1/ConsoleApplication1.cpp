#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float a, V, S;

    cout << "Введите длину ребра куба a: ";
    cin >> a;

    V = a * a * a;
    S = 6 * a * a;

    cout << "Объем куба: " << V << endl;
    cout << "Площадь поверхности куба: " << S << endl;

    return 0;
}
