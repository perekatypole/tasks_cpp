#include <iostream>

int doubleFactorial(int n)
{
    if (n <= 0)
        return 1;
    else
        return n * doubleFactorial(n - 2);
}

int main()
{
    int number;

    std::cout << "Введите число для вычисления двойного факториала: ";
    std::cin >> number;

    int result = doubleFactorial(number);

    std::cout << "Двойной факториал числа " << number << " равен: " << result << std::endl;

    return 0;
}
