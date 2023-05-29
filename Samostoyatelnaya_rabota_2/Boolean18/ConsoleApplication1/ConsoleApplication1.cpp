#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool res = a == b || a == c || b == c;
    res == 1 ? cout << "True" : cout << "False";
}
