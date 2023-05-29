#include <iostream>
using namespace std;

int main()
{
    int x, res;
    if (x <= 0)res = -x;
    else if (x > 0 && x < 2)res = x * x;
    else res = 4;
    cout << res;
}
