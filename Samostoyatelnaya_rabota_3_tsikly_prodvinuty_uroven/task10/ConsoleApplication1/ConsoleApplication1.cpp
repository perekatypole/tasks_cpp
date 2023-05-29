#include <iostream>
#include <cmath>

int main() {
    int upperBound;
    double result = 1.0;

    std::cout << "Введите верхнюю границу произведения: ";
    std::cin >> upperBound;

    for (int n = 1; n <= upperBound; n++) {
        double term = cos(M_PI / pow(2, n + 1));
        result *= term;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
