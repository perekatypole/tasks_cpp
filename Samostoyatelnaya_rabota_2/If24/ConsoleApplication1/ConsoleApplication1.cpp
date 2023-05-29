#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, res;
    cin >> x;
    if (x > 0)
    {
        res = 2 * sin(x);
    }
    else
    {
        res = 6 - x;
    }
    cout << res;
}

