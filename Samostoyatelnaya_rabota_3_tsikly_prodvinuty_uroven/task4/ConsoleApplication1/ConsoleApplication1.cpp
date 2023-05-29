#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int N = 1000;
    int x, res = 1, sign = -1;
    cin >> x;
    for (int i = 2; i <= N; i++)
    {
        res += sign*(N + 1) * pow(x, N);
        sign *= -1;
    }
    cout << res;
}