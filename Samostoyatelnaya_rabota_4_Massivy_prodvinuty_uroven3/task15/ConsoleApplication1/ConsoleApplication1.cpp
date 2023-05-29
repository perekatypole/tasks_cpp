#include <iostream>

const int MAX_SIZE = 100;

double calculateDerivativeValue(double coefficients[], int degree, double x) {
    double result = 0.0;

    for (int i = degree; i >= 1; i--) {
        result = (result + coefficients[i] * i) * x;
    }

    return result;
}

int main() {
    int degree;
    double coefficients[MAX_SIZE];
    double x;
    char choice;

    do {
        std::cout << "Введите степень полинома: ";
        std::cin >> degree;

        std::cout << "Введите коэффициенты полинома: ";
        for (int i = degree; i >= 0; i--) {
            std::cin >> coefficients[i];
        }

        std::cout << "Введите значение аргумента: ";
        std::cin >> x;

        double result = calculateDerivativeValue(coefficients, degree, x);
        std::cout << "Значение производной полинома: " << result << std::endl;

        std::cout << "Хотите продолжить? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
