#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int day;
    cout << "Введите номер дня недели (1-7): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "понедельник" << endl;
        break;
    case 2:
        cout << "вторник" << endl;
        break;
    case 3:
        cout << "среда" << endl;
        break;
    case 4:
        cout << "четверг" << endl;
        break;
    case 5:
        cout << "пятница" << endl;
        break;
    case 6:
        cout << "суббота" << endl;
        break;
    case 7:
        cout << "воскресенье" << endl;
        break;
    default:
        cout << "Некорректный номер дня недели!" << endl;
        break;
    }

    return 0;
}
