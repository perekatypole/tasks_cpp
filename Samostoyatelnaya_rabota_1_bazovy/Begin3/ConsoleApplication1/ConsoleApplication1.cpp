#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float a, b, S, P;

    cout << "Введите стороны прямоугольника a и b: ";
    cin >> a >> b;

    S = a * b;
    P = 2 * (a + b);

    cout << "Площадь прямоугольника: " << S << endl;
    cout << "Периметр прямоугольника: " << P << endl;

    return 0;
}
