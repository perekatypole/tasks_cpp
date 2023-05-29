#include <iostream>
#include <cmath>

double calculateVectorAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double dotProduct = x1 * x2 + y1 * y2 + z1 * z2;
    double magnitude1 = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
    double magnitude2 = sqrt(pow(x2, 2) + pow(y2, 2) + pow(z2, 2));

    double angle = acos(dotProduct / (magnitude1 * magnitude2));
    return angle;
}

int main()
{
    double x1, y1, z1;
    double x2, y2, z2;
    std::cout << "Введите компоненты первого вектора (x1, y1, z1): ";
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Введите компоненты второго вектора (x2, y2, z2): ";
    std::cin >> x2 >> y2 >> z2;

    double angle = calculateVectorAngle(x1, y1, z1, x2, y2, z2);

    std::cout << "Угол между векторами: " << angle << " радиан" << std::endl;

    return 0;
}
