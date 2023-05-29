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

double solveEquationSecant(double coefficients[], int degree, double a, double b) {
    double fa = calculateFunctionValue(coefficients, degree, a);
    double fb = calculateFunctionValue(coefficients, degree, b);

    double c = a;

    for (int i = 0; i < MAX_ITERATIONS; i++) {
        double fc = calculateFunctionValue(coefficients, degree, c);

        if (fabs(fc) < EPSILON) {
            break;
        }

        c = (a * fb - b * fa) / (fb - fa);

        if (fabs(c - b) < EPSILON) {
            break;
        }

        double fc = calculateFunctionValue(coefficients, degree, c);

        if (fc * fb < 0) {
            a = b;
            fa = fb;
        }

        b = c;
        fb = fc;
    }

    return c;
}

int main() {
    int degree;
    double coefficients[MAX_SIZE];
    double a, b;

    std::cout << "Введите степень полинома: ";
    std::cin >> degree;

    std::cout << "Введите коэффициенты полинома: ";
    for (int i = 0; i <= degree; i++) {
        std::cin >> coefficients[i];
    }

    std::cout << "Введите интервал [a, b]: ";
    std::cin >> a >> b;

    double solution = solveEquationSecant(coefficients, degree, a, b);
    std::cout << "Решение уравнения: " << solution << std::endl;

    return 0;
}
