#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int year;
    cout << "Enter year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << "Високосный\n";
    }
    else {
        cout << year << "Не високосный\n";
    }
    return 0;
}
