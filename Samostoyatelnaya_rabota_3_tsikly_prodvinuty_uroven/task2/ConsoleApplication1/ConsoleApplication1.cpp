#include <iostream>
#include <math.h>

const int N = 100; // Граница ряда

double factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double calculateExponent(double x)
{
    double exponent = 1.0;
    double term = 1.0;

    for (int i = 1; i <= N; i++)
    {
        term *= pow(x,i) / factorial(i);
        exponent += term;
    }

    return exponent;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double x;

    std::cout << "Введите аргумент x: ";
    std::cin >> x;

    double result = calculateExponent(x);

    std::cout << "Значение экспоненты: " << result << std::endl;

    return 0;
}
