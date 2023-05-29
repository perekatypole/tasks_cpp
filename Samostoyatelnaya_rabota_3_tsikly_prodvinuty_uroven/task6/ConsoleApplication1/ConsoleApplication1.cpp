#include <iostream>
#include <cmath>

const int SERIES_LIMIT = 1000;

double calculateSin(double x) {
    double sinValue = 0.0;

    for (int n = 0; n <= SERIES_LIMIT; n++) {
        double term = pow(-1, n) * pow(x, (2 * n) + 1);
        double factorial = 1.0;

        for (int i = 1; i <= (2 * n) + 1; i++) {
            factorial *= i;
        }

        sinValue += term / factorial;
    }

    return sinValue;
}

int main() {
    double x;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    double result = calculateSin(x);

    std::cout << "sin(" << x << ") = " << result << std::endl;

    return 0;
}
