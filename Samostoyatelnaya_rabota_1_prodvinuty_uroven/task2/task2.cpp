#include <iostream>
#include <math.h>

int main()
{
    double a, v, g = 9.8, pi = 3.1416;
    std::cin >> a >> v;
    std::cout << v * v * sin((2 * a)*pi/180) / g;
}
