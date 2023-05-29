#include <math.h>
#include <iostream>

int main()
{
    double g = 9.81;
    double Pi = 3.1416;
    setlocale(LC_ALL, "ru");
    double m, F0, mu, alph, a, F;
    std::cout << "m = "; std::cin >> m;
    std::cout << "F0 = "; std::cin >> F0;
    std::cout << "mu = "; std::cin >> mu;
    std::cout << "alpha = "; std::cin >> alph;
    F = (F0 * cos(alph * Pi / 180) - mu * m * g * sin(alph * Pi / 180));
    a = F / m;
    if (F == 0) 
    {
        std::cout << "Тело неподвижно"<<std::endl;
        return 0;
    }
    std::cout << "Ускорение тела равно: " << a;
}