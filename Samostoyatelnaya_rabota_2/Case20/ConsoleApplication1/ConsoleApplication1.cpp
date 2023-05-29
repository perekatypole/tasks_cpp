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
    case 1:
        if (day >= 20)
            cout << "Водолей";
        else
            cout << "Козерог";
        break;
    case 2:
        if (day >= 19)
            cout << "Рыбы";
        else
            cout << "Водолей";
        break;
    case 3:
        if (day >= 21)
            cout << "Овен";
        else
            cout << "Рыбы";
        break;
    case 4:
        if (day >= 20)
            cout << "Телец";
        else
            cout << "Овен";
        break;
    case 5:
        if (day >= 21)
            cout << "Близнецы";
        else
            cout << "Телец";
        break;
    case 6:
        if (day >= 22)
            cout << "Рак";
        else
            cout << "Близнецы";
        break;
    case 7:
        if (day >= 23)
            cout << "Лев";
        else
            cout << "Рак";
        break;
    case 8:
        if (day >= 23)
            cout << "Дева";
        else
            cout << "Лев";
        break;
    case 9:
        if (day >= 23)
            cout << "Весы";
        else
            cout << "Дева";
        break;
    case 10:
        if (day >= 23)
            cout << "Скорпион";
        else
            cout << "Весы";
        break;
    case 11:
        if (day >= 23)
            cout << "Стрелец";
        else
            cout << "Скорпион";
        break;
    case 12:
        if (day >= 22)
            cout << "Козерог";
        else
            cout << "Стрелец";
        break;
    }

    return 0;
}
