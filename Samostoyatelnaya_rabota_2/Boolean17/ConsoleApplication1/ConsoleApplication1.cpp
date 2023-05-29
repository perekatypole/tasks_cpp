#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    bool res = a % 2 != 0 && a >= 100 && a <= 999;
    res == 1 ? cout << "True" : cout << "False";
}
