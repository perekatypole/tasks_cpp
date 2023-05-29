#include <iostream>
#include <cmath>

const int SERIES_LIMIT = 1000;

double calculateCos(double x) {
    double cosValue = 0.0;

    for (int n = 0; n <= SERIES_LIMIT; n++) {
        double term = pow(-1, n) * pow(x, 2 * n);
        double factorial = 1.0;

        for (int i = 1; i <= 2 * n; i++) {
            factorial *= i;
        }

        cosValue += term / factorial;
    }

    return cosValue;
}

int main() {
    double x;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    double result = calculateCos(x);

    std::cout << "cos(" << x << ") = " << result << std::endl;

    return 0;
}
