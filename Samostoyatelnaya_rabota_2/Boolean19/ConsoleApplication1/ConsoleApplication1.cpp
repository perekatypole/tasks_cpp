#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool res = a*(-1) == b || a*(-1) == c || b*(-1) == c;
    res == 1 ? cout << "True" : cout << "False";
}