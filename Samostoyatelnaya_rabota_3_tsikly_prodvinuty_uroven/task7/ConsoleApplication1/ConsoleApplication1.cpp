#include <iostream>

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;

    unsigned long long result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    std::cout << "Введите число для вычисления факториала: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Ошибка: факториал определен только для неотрицательных чисел." << std::endl;
        return 1;
    }

    unsigned long long result = factorial(n);

    std::cout << "Факториал " << n << " равен: " << result << std::endl;

    return 0;
}
