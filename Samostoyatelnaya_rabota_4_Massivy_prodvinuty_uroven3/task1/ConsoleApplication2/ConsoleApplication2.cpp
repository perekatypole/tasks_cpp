#include <iostream>
#include <cmath>

double calculateVectorMagnitude(double x, double y, double z)
{
    double magnitude = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    return magnitude;
}

int main()
{
    double x, y, z;
    std::cout << "Введите компоненты вектора (x, y, z): ";
    std::cin >> x >> y >> z;

    double magnitude = calculateVectorMagnitude(x, y, z);

    std::cout << "Модуль вектора: " << magnitude << std::endl;

    return 0;
}
