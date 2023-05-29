#include <iostream>
#include <math.h>

int main()
{
    double v, t, g = 9.8, pi = 3.1416;
    std::cin >> v >> t;
    std::cout << asin((g * t / (2 * v))*pi/180);
}
