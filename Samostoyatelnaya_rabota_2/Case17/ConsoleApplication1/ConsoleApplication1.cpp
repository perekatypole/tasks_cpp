#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int number;
    cout << "Введите число: ";
    cin >> number;

    int lastDigit = number % 10;
    int fst_number = number / 10;

    switch (fst_number)
    {
    case 2:
        cout << "двадцать ";
        break;
    case 3:
        cout << "тридцать ";
        break;
    case 4:
        cout << "сорок ";
        break;
    }

    switch (number) {
    case 11:
        cout << "одиннадцать учебных заданий";
        break;
    case 12:
        cout << "двенадцать учебных заданий";
        break;
    case 13:
        cout << "тринадцать учебных заданий";
        break;
    case 14:
        cout << "четырнадцать учебных заданий";
        break;
    case 15:
        cout << "пятнадцать учебных заданий";
        break;
    case 16:
        cout << "щестнадцать учебных заданий";
        break;
    case 17:
        cout << "семнадцать учебных заданий";
        break;
    case 18:
        cout <<"восемнадцать учебных заданий";
        break;
    case 19:
        cout << "девятнадцать учебных заданий";
        break;
    default:
        switch (lastDigit) {
        case 1:
            cout << "одно учебное задание";
            break;
        case 2:
            cout <<"два учебных задания";
            break;
        case 3:
            cout << "три учебных задания";
            break;
        case 4:
            cout <<"четыре учебных задания";
            break;
        case 5:
            cout <<"пять учебных заданий";
            break;
        case 6:
            cout << "шесть учебных заданий";
            break;
        case 7:
            cout << "семь учебных заданий";
            break;
        case 8:
            cout << "восемь учебных заданий";
            break;
        case 9:
            cout << "девять учебных заданий";
            break;
        case 10:
            cout << "десять учебных заданий";
            break;
        }
    }

    return 0;
}
