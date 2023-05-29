#include <iostream>
#include <random>

double calculateVolume(int numPoints)
{
    int pointsInside = 0;

    // Используем генератор случайных чисел для получения координат точек
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(-1.0, 1.0);

    for (int i = 0; i < numPoints; i++)
    {
        // Генерируем случайные координаты x, y, z в диапазоне [-1, 1]
        double x = dist(gen);
        double y = dist(gen);
        double z = dist(gen);

        // Проверяем, принадлежит ли точка телу
        if (z >= 0 && z <= x * x + y * y && y <= x * x && y <= 1)
        {
            pointsInside++;
        }
    }

    // Вычисляем объем тела по формуле V = V_обл * p_внутр / p_всего,
    // где V_обл - объем области, в которой генерируются точки,
    // p_внутр - количество точек, попавших внутрь тела,
    // p_всего - общее количество сгенерированных точек.
    double volume = 8.0 * pointsInside / numPoints;

    return volume;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int numPoints;

    std::cout << "Введите количество точек для генерации: ";
    std::cin >> numPoints;

    double calculatedVolume = calculateVolume(numPoints);

    // Сравниваем полученный объем с результатом, рассчитанным по формуле
    double expectedVolume = 88.0 / 105.0;

    std::cout << "Вычисленный объем: " << calculatedVolume << std::endl;
    std::cout << "Ожидаемый объем (по формуле): " << expectedVolume << std::endl;

    return 0;
}
