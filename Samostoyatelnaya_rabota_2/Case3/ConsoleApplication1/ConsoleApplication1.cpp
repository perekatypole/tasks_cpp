#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    switch (month) {
    case 1:
    case 2:
    case 12:
        cout << "зима" << endl;
        break;
    case 3:
    case 4:
    case 5:
        cout << "весна" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "лето" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "осень" << endl;
        break;
    default:
        cout << "Некорректный номер месяца!" << endl;
        break;
    }

    return 0;
}
