#include <iostream>
#include <cmath>

const int MAX_ITERATIONS = 100;
const double EPSILON = 1e-6;

double calculateFunctionValue(double coefficients[], int degree, double x) {
    double result = 0.0;

    for (int k = 0; k <= degree; k++) {
        result += coefficients[k] * pow(x, k);
    }

    return result;
}

double calculateDerivativeValue(double coefficients[], int degree, double x) {
    double result = 0.0;

    for (int k = 1; k <= degree; k++) {
        result += k * coefficients[k] * pow(x, k - 1);
    }

    return result;
}

double solveEquationNewton(double coefficients[], int degree, double initialGuess) {
    double x = initialGuess;

    for (int i = 0; i < MAX_ITERATIONS; i++) {
        double fx = calculateFunctionValue(coefficients, degree, x);
        double fPrimeX = calculateDerivativeValue(coefficients, degree, x);

        double deltaX = fx / fPrimeX;
        x -= deltaX;

        if (fabs(deltaX) < EPSILON) {
            break;
        }
    }

    return x;
}

int main() {
    int degree;
    double coefficients[MAX_SIZE];
    double initialGuess;

    std::cout << "Введите степень полинома: ";
    std::cin >> degree;

    std::cout << "Введите коэффициенты полинома: ";
    for (int i = 0; i <= degree; i++) {
        std::cin >> coefficients[i];
    }

    std::cout << "Введите начальное приближение: ";
    std::cin >> initialGuess;

    double solution = solveEquationNewton(coefficients, degree, initialGuess);
    std::cout << "Решение уравнения: " << solution << std::endl;

    return 0;
}
