#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Integer1
    int L;
    cin >> L;
    int meters = L / 100;
    cout << meters << endl;

    // Integer2
    int M;
    cin >> M;
    int tons = M / 1000;
    cout << tons << endl;

    // Integer3
    int fileSize;
    cin >> fileSize;
    int kilobytes = fileSize / 1024;
    cout << kilobytes << endl;

    // Integer4
    int A, B;
    cin >> A >> B;
    int count = A / B;
    cout << count << endl;

    // Integer5
    int A, B;
    cin >> A >> B;
    int remainder = A % B;
    cout << remainder << endl;

    // Integer6
    int num;
    cin >> num;
    int tens = num / 10;
    int ones = num % 10;
    cout << "Десятки: " << tens << endl;
    cout << "Единицы: " << ones << endl;

    // Integer7
    int num;
    cin >> num;
    int tens = num / 10;
    int ones = num % 10;
    int sum = tens + ones;
    int product = tens * ones;
    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << product << endl;

    // Integer8
    int num;
    cin >> num;
    int reversed = (num % 10) * 10 + (num / 10);
    cout << reversed << endl;

    // Integer9
    int num;
    cin >> num;
    int hundreds = num / 100;
    cout << hundreds << endl;

    // Integer10
    int num;
    cin >> num;
    int ones = num % 10;
    int tens = (num / 10) % 10;
    cout << "Единицы: " << ones << endl;
    cout << "Десятки: " << tens << endl;

    // Integer11
    int num;
    cin >> num;
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    int sum = hundreds + tens + ones;
    int product = hundreds * tens * ones;
    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << product << endl;

    // Integer12
    int num;
    cin >> num;
    int reversed = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    cout << reversed << endl;

    // Integer13
    int num;
    cin >> num;
    int newNum = (num % 100) * 10 + (num / 100);
    cout << newNum << endl;

    // Integer14
    int num;
    cin >> num;
    int newNum = (num % 10) * 100 + (num / 10);
    cout << newNum << endl;
    return 0;
}