#include <iostream>
#include <cmath>

double calculateSeries(double x) {
    const int LIMIT = 1000;
    double result = 0.0;

    for (int n = 0; n <= LIMIT; n++) {
        double term = std::pow(-1, n) * std::pow(x, 2 * n) / std::tgamma(2 * n + 1);
        result += term;
    }

    return result;
}

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    double seriesResult = calculateSeries(x);
    std::cout << "Значение ряда sin(x)/x: " << seriesResult << std::endl;

    return 0;
}
