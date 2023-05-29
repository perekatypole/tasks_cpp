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

    if (day == 1) {
        if (month == 1) {
            day = 31;
            month = 12;
        }
        else {
            month--;
            switch (month) {
            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
                break;
            case 2:
                day = 28;
                break;
            default:
                day = 31;
                break;
            }
        }

        cout << "Предшествующая дата: " << day << "." << month << endl;
    }
    else {
        cout << "Предшествующая дата: " << day - 1 << "." << month << endl;
    }

    return 0;
}
