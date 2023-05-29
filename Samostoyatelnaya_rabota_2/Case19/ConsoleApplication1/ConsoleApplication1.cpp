#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int year;
    cout << "Введите год: ";
    cin >> year;

    int cycleStartYear = 1984;
    int yearOffset = year - cycleStartYear;
    int colorIndex = (yearOffset / 12) % 5;
    int animalIndex = yearOffset % 12;

    string color;
    switch (colorIndex) {
    case 0:
        color = "зеленой";
        break;
    case 1:
        color = "красной";
        break;
    case 2:
        color = "желтой";
        break;
    case 3:
        color = "белой";
        break;
    case 4:
        color = "черной";
        break;
    }

    string animal;
    switch (animalIndex) {
    case 0:
        animal = "крысы";
        break;
    case 1:
        animal = "коровы";
        break;
    case 2:
        animal = "тигра";
        break;
    case 3:
        animal = "зайца";
        break;
    case 4:
        animal = "дракона";
        break;
    case 5:
        animal = "змеи";
        break;
    case 6:
        animal = "лошади";
        break;
    case 7:
        animal = "овцы";
        break;
    case 8:
        animal = "обезьяны";
        break;
    case 9:
        animal = "курицы";
        break;
    case 10:
        animal = "собаки";
        break;
    case 11:
        animal = "свиньи";
        break;
    }

    cout << "Год " << color << " " << animal << endl;

    return 0;
}
