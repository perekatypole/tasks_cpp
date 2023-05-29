#include <iostream>
#include <cmath>

const int SERIES_LIMIT = 1000;

double calculateLog(double x) {
    if (x <= -1 || x >= 1) {
        std::cout << "Ошибка: Аргумент должен удовлетворять условию |x| < 1." << std::endl;
        return 0.0;
    }

    double logValue = 0.0;

    for (int n = 0; n <= SERIES_LIMIT; n++) {
        double term = pow(-1, n) * pow(x, (2 * n) + 1);
        logValue += term / ((2 * n) + 1);
    }

    return logValue;
}

int main() {
    double x;

    std::cout << "Введите значение x (|x| < 1): ";
    std::cin >> x;

    double result = calculateLog(x);

    std::cout << "ln(" << x << " + 1) = " << result << std::endl;

    return 0;
}
