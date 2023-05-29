#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int number;
    cin >> number;
    if (number > 0) {
        cout << "Положительное, ";
        if (number % 2 == 0) {
            cout << "четное ";
        }
        else {
            cout << "нечетное ";
        }
    }
    else if (number < 0) {
        cout << "Отрицательное, ";
        if (number % 2 == 0) {
            cout << "четное ";
        }
        else {
            cout << "нечетное ";
        }
    }
    else {
        cout << "Нулевое ";
    }
    cout << "число";
    return 0;
}
