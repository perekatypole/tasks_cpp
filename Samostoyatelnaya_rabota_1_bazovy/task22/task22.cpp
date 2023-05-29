#include <iostream>
#include <math.h>

double func_1(double a, double b)
{
    std::cout << "Задача №22(а) :\n" << "Ответ: ";
    return (a+b)/2*1.0;
}

double func_2(double x, double y)
{
    std::cout << "Задача №22(б) :\n" << "Ответ: ";
    return sqrt(x*y)*1.0;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double x, y;
    std::cin >> x>>y;
    std::cout << func_1(x, y) << std::endl;
    std::cout << func_2(x, y);
}


