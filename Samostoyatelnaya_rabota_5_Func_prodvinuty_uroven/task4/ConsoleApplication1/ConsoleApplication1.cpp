#include <iostream>
#include <cmath>

const int SERIES_LIMIT = 1000;

double calculateExp(double x) {
    double expValue = 0.0;

    for (int n = 0; n <= SERIES_LIMIT; n++) {
        double term = pow(x, n);
        double factorial = 1.0;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        expValue += term / factorial;
    }

    return expValue;
}

int main() {
    double x;

    std::cout << "Введите значение x: ";
    std
