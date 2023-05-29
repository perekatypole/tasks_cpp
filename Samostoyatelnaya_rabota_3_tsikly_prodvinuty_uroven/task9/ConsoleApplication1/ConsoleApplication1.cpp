#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int c;
    cin >> c;
    double res = 1.0;
    for (int n = 0; n < c; n++)
    {
        res *= 1 + pow(0.5, 2*n);
    }
    cout << (int)res;
}
