#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double calculateArea(double a, int numPoints)
{
    int pointsInside = 0;
    double xmin = 0.0;
    double xmax = a;
    double ymin = 0.0;
    double ymax = 5.0 * a / 2.0;

    // Генерация случайных точек и проверка, попадают ли они внутрь области
    for (int i = 0; i < numPoints; i++)
    {
        double x = (double)rand() / RAND_MAX * (xmax - xmin) + xmin;
        double y = (double)rand() / RAND_MAX * (ymax - ymin) + ymin;

        if ((x * y <= a * a) && (x + y >= 5.0 * a / 2.0))
        {
            pointsInside++;
        }
    }

    // Вычисление площади
    double totalArea = (xmax - xmin) * (ymax - ymin);
    double area = totalArea * pointsInside / numPoints;

    return area;
}

int main()
{
    // Установка генератора случайных чисел на основе текущего времени
    srand(time(0));

    double a;
    int numPoints;

    std::cout << "Введите параметр a (>0): ";
    std::cin >> a;

    std::cout << "Введите количество точек: ";
    std::cin >> numPoints;

    double monteCarloArea = calculateArea(a, numPoints);
    double formulaArea = (15.0 / 8.0 - 2.0 * log(2.0)) * a * a;

    std::cout << "Площадь, вычисленная методом Монте-Карло: " << monteCarloArea << std::endl;
    std::cout << "Площадь, вычисленная по формуле: " << formulaArea << std::endl;

    return 0;
}
