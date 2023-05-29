#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int day, month;

    cout << "Введите день: ";
    cin >> day;

    cout << "Введите месяц: ";
    cin >> month;

    switch (month) {
    case 2:
        if (day == 28) {
            day = 1;
            month = 3;
        }
        else {
            day++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day == 30) {
            day = 1;
            month++;
        }
        else {
            day++;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day == 31) {
            day = 1;
            month++;
        }
        else {
            day++;
        }
        break;
    case 12:
        if (day == 31) {
            day = 1;
            month = 1;
        }
        else {
            day++;
        }
        break;
    default:
        cout << "Некорректный месяц!" << endl;
        return 0;
    }

    cout << "Следующая дата: " << day << "." << month << endl;

    return 0;
}
