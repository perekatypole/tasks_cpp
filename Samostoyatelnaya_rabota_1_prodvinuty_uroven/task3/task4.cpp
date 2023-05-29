#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "ru");
    double a, h, v, t, x, y, T, g = 9.8, pi = 3.1416;
    std::cout << "Высота: "; std::cin >> h;
    std::cout << "Скорость: "; std::cin >> v;
    std::cout << "Время: "; std::cin >> t;
    std::cout << "Угол: "; std::cin >> a;
    x = v * t * cos(a*pi/180);
    y = h + v * t * sin(a*pi/180) - g * t * t / 2;
    T = (v * sin(a*pi/180) / g) * (1 + sqrt(1 + 2 * g * h / (v * v * sin(a*pi/180) * sin(a*pi/180))));
    if (t < T)
    {
        std::cout << "";
        return 0;
    }
    std::cout << "x= " << x << "\ny= " << y;
}

