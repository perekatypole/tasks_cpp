#include <iostream>
#include <math.h>

double func_1(double a)
{
    std::cout << "Задача №15(а) :\n"<<"Ответ: ";
    return sqrt((2 * a + sin(3 * a)) / 3.56);
}

double func_2(double x)
{
    std::cout << "Задача №15(б) :\n" << "Ответ: ";
    return sin((3.2 + sqrt(1 + x)) / abs(5 * x));
}

int main()
{
    setlocale(LC_ALL, "ru");
    double x;
    std::cin >> x;
    std::cout << func_1(x) <<std::endl;
    std::cout << func_2(x);
}
