#include <iostream>

const int MAX_SIZE = 100;

double calculatePolynomialValue(double coefficients[], int degree, double x) {
    double result = 0.0;

    for (int i = 0; i <= degree; i++) {
        result += coefficients[i] * std::pow(x, i);
    }

    return result;
}

int main() {
    int degree;
    double coefficients[MAX_SIZE];
    double x;

    std::cout << "Введите степень полинома: ";
    std::cin >> degree;

    std::cout << "Введите коэффициенты полинома (начиная с коэффициента при x^0): ";
    for (int i = 0; i <= degree; i++) {
        std::cin >> coefficients[i];
    }

    std::cout << "Введите значение x: ";
    std::cin >> x;

    double polynomialValue = calculatePolynomialValue(coefficients, degree, x);
