#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    int days;

    switch (month) {
    case 2:
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;

