#include <iostream>

using namespace std;

int main()
{
    int a, b, c, positive = 0, negative = 0;
    cin >> a >> b >> c;
    if (a > 0) positive++;
    else if (a < 0) negative++;
    if (b > 0) positive++;
    else if (b < 0) negative++;
    if (c > 0) positive++;
    else if (c < 0) negative++;
    cout << "Количество положительных чисел: " << positive << endl;
    cout << "Количество отрицательных чисел: " << negative << endl;
    return 0;
}
