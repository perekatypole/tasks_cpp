#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    float A, B, x;

    cout << "Введите коэффициент A: ";
    cin >> A;
    cout << "Введите коэффициент B: ";
    cin >> B;

    x = -B / A;

    cout << "Корень уравнения: x = " << x << endl;

    return 0;
}
