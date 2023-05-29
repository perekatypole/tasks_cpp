#include <iostream>
#include <cmath>

const int SERIES_LIMIT = 1000;

double calculateCosh(double x) {
    double coshValue = 0.0;

    for (int n = 0; n <= SERIES_LIMIT; n++) {
        double term = pow(x, 2 * n);
        double factorial = 1.0;

        for (int i = 1; i <= 2 * n; i++) {
            factorial *= i;
        }

        coshValue += term / factorial;
    }

    return coshValue;
}

int main() {
    double x;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    double result = calculateCosh(x);

    std::cout << "cosh(" << x << ") = " << result << std::endl;

    return 0;
}
