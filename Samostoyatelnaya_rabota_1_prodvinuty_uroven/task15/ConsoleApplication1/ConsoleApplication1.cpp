#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double t, alpha, mu;
    cout << "Введите массу тела t: ";
    cin >> t;
    cout << "Введите угол наклона α: ";
    cin >> alpha;
    cout << "Введите коэффициент трения μ: ";
    cin >> mu;

    double F = (t * 9.8 * sin(alpha)) - (mu * t * 9.8 * cos(alpha));
    F = (F < 0) ? 0 : F;

    cout << "Сила натяжения нити F: " << F << endl;

    return 0;
}
