#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int number;
    cout << "Введите число (100-999): ";
    cin >> number;

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    switch (hundreds) {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "девятьсот ";
        break;
    }

    switch (tens) {
    case 2:
        cout << "двадцать ";
        break;
    case 3:
        cout << "тридцать ";
        break;
    case 4:
        cout << "сорок ";
        break;
    case 5:
        cout << "пятьдесят ";
        break;
    case 6:
        cout << "шестьдесят ";
        break;
    case 7:
        cout << "семьдесят ";
        break;
    case 8:
        cout << "восемьдесят ";
        break;
    case 9:
        cout << "девяносто ";
        break;
    }

    switch (ones) {
    case 1:
        cout << "один";
        break;
    case 2:
        cout << "два";
        break;
    case 3:
        cout << "три";
        break;
    case 4:
        cout << "четыре";
        break;
    case 5:
        cout << "пять";
        break;
    case 6:
        cout << "шесть";
        break;
    case 7:
        cout << "семь";
        break;
    case 8:
        cout << "восемь";
        break;
    case 9:
        cout << "девять";
        break;
    }

    return 0;
}
