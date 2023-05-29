#include <iostream>
using namespace std;

int main()
{
    double x, res;
    cin >> x;
    if (x < 0)res = 0;
    else if (x >= 0 && ((x<int(x) && int(x) % 2 != 0)||(int(x) % 2 == 0))) res = 1;
    else if (x >= 1 && ((x<int(x) && int(x) % 2 == 0) || (int(x) % 2 != 0))) res = -1;
    cout << res;
}
