#include <iostream>
using namespace std;

int main()
{
    int a, b1, b2, b3;
    cin >> a;
    if (a >= 100 && a <= 999)
    {
        b1 = a / 100;
        b2 = (a / 10) % 10;
        b3 = a % 10;
        bool res = (b1 < b2&& b2 < b3) || (b1 > b2 && b2 > b3);
        res == 1 ? cout << "True" : cout << "False";
    }
}