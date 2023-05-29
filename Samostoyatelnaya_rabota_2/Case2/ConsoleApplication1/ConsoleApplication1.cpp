#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int grade;
    cout << "Введите оценку (1-5): ";
    cin >> grade;

    switch (grade) {
    case 1:
        cout << "плохо" << endl;
        break;
    case 2:
        cout << "неудовлетворительно" << endl;
        break;
    case 3:
        cout << "удовлетворительно" << endl;
        break;
    case 4:
        cout << "хорошо" << endl;
        break;
    case 5:
        cout << "отлично" << endl;
        break;
    default:
        cout << "ошибка" << endl;
        break;
    }

    return 0;
}
