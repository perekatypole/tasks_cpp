#include <iostream>
#include <math.h>

double func_1(double a, double b)
{
    std::cout << "Задача №21(а) :\n" << "Ответ: ";
    return pow(a, 3)-2.5*a*b+1.78*pow(a,2)-12.5*b+1;
}

double func_2(double a, double b)
{
    std::cout << "Задача №21(б) :\n" << "Ответ: ";
    return 3.56*pow((a+b), 3)-5.8*b*b+3.8*a-1.5;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double x, y;
    std::cin >> x>>y;
    std::cout << func_1(x, y) << std::endl;
    std::cout << func_2(x, y);
}