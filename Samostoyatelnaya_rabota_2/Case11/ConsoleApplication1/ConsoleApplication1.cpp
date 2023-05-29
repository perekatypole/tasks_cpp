#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    char orientation;
    int command1, command2;

    cout << "Введите исходную ориентацию локатора (С/З/Ю/В): ";
    cin >> orientation;

    cout << "Введите первую команду (1/-1/2): ";
    cin >> command1;

    cout << "Введите вторую команду (1/-1/2): ";
    cin >> command2;

    char newOrientation;

    switch (orientation) {
    case 'С':
        if (command1 == 1) {
            if (command2 == 1)
                newOrientation = 'З';
            else if (command2 == -1)
                newOrientation = 'В';
            else if (command2 == 2)
                newOrientation = 'Ю';
        }
        else if (command1 == -1) {
            if (command2 == 1)
                newOrientation = 'В';
            else if (command2 == -1)
                newOrientation = 'З';
            else if (command2 == 2)
                newOrientation = 'Ю';
        }
        else if (command1 == 2) {
            if (command2 == 1 || command2 == -1)
                newOrientation = 'Ю';
            else if (command2 == 2)
                newOrientation = 'С';
        }
        break;
    case 'З':
        if (command1 == 1) {
            if (command2 == 1)
                newOrientation = 'Ю';
            else if (command2 == -1)
                newOrientation = 'С';
            else if (command2 == 2)
                newOrientation = 'В';
        }
        else if (command1 == -1) {
            if (command2 == 1)
                newOrientation = 'С';
            else if (command2 == -1)
                newOrientation = 'Ю';
            else if (command2 == 2)
                newOrientation = 'В';
        }
        else if (command1 == 2) {
            if (command2 == 1 || command2 == -1)
                newOrientation = 'В';
            else if (command2 == 2)
                newOrientation = 'З';
        }
        break;
    case 'Ю':
        if (command1 == 1) {
            if (command2 == 1)
                newOrientation = 'В';
            else if (command2 == -1)
                newOrientation = 'З';
            else if (command2 == 2)
                newOrientation = 'С';
        }
        else if (command1 == -1) {
            if (command2 == 1)
                newOrientation = 'З';
            else if (command2 == -1)
                newOrientation = 'В';
            else if (command2 == 2)
                newOrientation = 'С';
        }
        else if (command1 == 2) {
            if (command2 == 1 || command2 == -1)
                newOrientation = 'С';
            else if (command2 == 2)
                newOrientation = 'Ю';
        }
        break;
    case 'В':
        if (command1 == 1) {
            if (command2 == 1)
                newOrientation = 'С';
            else if (command2 == -1)
                newOrientation = 'Ю';
            else if (command2 == 2)
                newOrientation = 'З';
        }
        else if (command1 == -1) {
            if (command2 == 1)
                newOrientation = 'Ю';
            else if (command2 == -1)
                newOrientation = 'З';
            else if (command2 == 2)
                newOrientation = 'С';
        }
        else if (command1 == 2) {
            if (command2 == 1 || command2 == -1)
                newOrientation = 'В';
            else if (command2 == 2)
                newOrientation = 'В';
        }
        break;
    default:
        cout << "Ошибка: некорректная ориентация локатора.";
        return 0;
    }