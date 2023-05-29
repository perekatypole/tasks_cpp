#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int x, counter=0;
    cin >> x;
    if (x % 2 == 0)cout << "Четное ";
    else cout << "Нечетное ";
    while (x != 0)
    {
        x /= 10;
        counter++;
    }
    switch (counter)
    {
    case 1:
        cout << "однозначное ";
        break;
    case 2:
        cout << "двузначное ";
        break;
    case 3:
        cout << "трехзначное ";
        break;
    }
    cout << "число";
}
