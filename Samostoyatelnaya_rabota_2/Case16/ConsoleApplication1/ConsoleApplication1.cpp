#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int age;

    cout << "Введите возраст (20-69): ";
    cin >> age;

    int lastDigit = age % 10;
    string ageDescription, ageDescription1;
    age /= 10;
    switch (age) {
    case 2:
        ageDescription1 = "двадцать ";
        break;
    case 3:
        ageDescription1 = "тридцать ";
        break;
    case 4:
        ageDescription1 = "сорок ";
        break;
    case 5:
        ageDescription1 = "пятьдесят ";
        break;
    case 6:
        ageDescription1 = "шестьдесят ";
        break;
    }
    switch (lastDigit) {
    case 1:
        ageDescription = "один год";
        break;
    case 2:
        ageDescription = "два года";
        break;
    case 3:
        ageDescription = "три года";
        break;
    case 4:
        ageDescription = "четыре года";
        break;
    case 5:
        ageDescription = "пять лет";
        break;
    case 6:
        ageDescription = "шесть лет";
        break;
    case 7:
        ageDescription = "семь лет";
        break;
    case 8:
        ageDescription = "восемь лет";
        break;
    case 9:
        ageDescription = "девять лет";
        break;
    default:
        ageDescription = "лет";
        break;
    }

    cout << ageDescription1 << ageDescription << endl;

    return 0;
}
