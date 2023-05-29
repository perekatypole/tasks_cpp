#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int rank, suit;

    cout << "Введите достоинство карты (6-14): ";
    cin >> rank;

    cout << "Введите масть карты (1-4): ";
    cin >> suit;

    string rankName;
    string suitName;

    switch (rank) {
    case 6:
        rankName = "шестерка";
        break;
    case 7:
        rankName = "семерка";
        break;
    case 8:
        rankName = "восьмерка";
        break;
    case 9:
        rankName = "девятка";
        break;
    case 10:
        rankName = "десятка";
        break;
    case 11:
        rankName = "валет";
        break;
    case 12:
        rankName = "дама";
        break;
    case 13:
        rankName = "король";
        break;
    case 14:
        rankName = "туз";
        break;
    default:
        cout << "Ошибка: некорректное достоинство карты.";
        return 0;
    }

    switch (suit) {
    case 1:
        suitName = "пик";
        break;
    case 2:
        suitName = "треф";
        break;
    case 3:
        suitName = "бубен";
        break;
    case 4:
        suitName = "червей";
        break;
    default:
        cout << "Ошибка: некорректная масть карты.";
        break;
    }

    cout << rankName << " " << suitName << endl;

    return 0;
}
