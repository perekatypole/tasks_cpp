#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    char direction;
    int command;

    cout << "Введите исходное направление робота (С/З/Ю/В): ";
    cin >> direction;

    cout << "Введите команду (0/1/-1): ";
    cin >> command;

    char newDirection;

    switch (direction) {
    case 'С':
        if (command == 0) {
            newDirection = 'С';
        }
        else if (command == 1) {
            newDirection = 'З';
        }
        else if (command == -1) {
            newDirection = 'В';
        }
        else {
            cout << "Некорректная команда!" << endl;
            return 0;
        }
        break;
    case 'З':
        if (command == 0) {
            newDirection = 'З';
        }
        else if (command == 1) {
            newDirection = 'Ю';
        }
        else if (command == -1) {
            newDirection = 'С';
        }
        else {
            cout << "Некорректная команда!" << endl;
            return 0;
        }
        break;
    case 'Ю':
        if (command == 0) {
            newDirection = 'Ю';
        }
        else if (command == 1) {
            newDirection = 'В';
        }
        else if (command == -1) {
            newDirection = 'З';
        }
        else {
            cout << "Некорректная команда!" << endl;
            return 0;
        }
        break;
    case 'В':
        if (command == 0) {
            newDirection = 'В';
        }
        else if (command == 1) {
            newDirection = 'С';
        }
        else if (command == -1) {
            newDirection = 'Ю';
        }
        else {
            cout << "Некорректная команда!" << endl;
            return 0;
        }
        break;
    default:
        cout << "Некорректное направление!" << endl;
        return 0;
    }

    cout << "Направление робота после выполнения команды: " << newDirection << endl;

    return 0;
}
