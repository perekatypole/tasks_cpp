#include <iostream>
#include <math.h>

int main()
{
    long double h, M = 5.96 * pow(10, 24), G = 6.672 * pow(10, -11), R = 6.37 * pow(10, 6);
    std::cin >> h;
    double g = G * M / pow((R + h), 2);
    std::cout << g;
}

