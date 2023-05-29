#include <iostream>
#include <math.h>

int main()
{
    double alph, a, mu, pi = 3.1416, g = 9.8;
    std::cout << "alpha= "; std::cin >> alph;
    std::cout << "a= "; std::cin >> a;
    mu = (g * sin(alph * pi / 180) - a)/cos(alph*pi/180);
    std::cout << mu;
}