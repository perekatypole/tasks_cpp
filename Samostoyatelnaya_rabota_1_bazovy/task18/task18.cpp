#include <math.h>
#include <iostream>

int main()
{
    double h, rad = 6350.0;
    std::cout << "Введите заданную высоту: "; std::cin >> h;
    return sqrt(pow(h, 2) + pow(2.0 * rad, 2));
}