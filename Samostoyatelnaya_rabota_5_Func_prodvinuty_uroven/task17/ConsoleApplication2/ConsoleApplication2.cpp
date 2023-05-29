#include <iostream>
#include <cmath>

const double EPSILON = 1e-6;

double calculateFunctionValue(double coefficients[], int degree, double x) {
    double result = 0.0;

    for (int k = 0; k <= degree; k++) {
        result += coefficients[k] * pow(x, k);
    }

    return result;
}

double solveEquationBisection(double coefficients[], int degree, double a, double b) {
    double fa = calculateFunctionValue(coefficients, degree, a);
    double fb = calculateFunctionValue(coefficients, degree, b);

    if (fa * fb >= 0) {
        std::cout << "Условие f(a) * f(b) < 0 не выполнено. Невозможно найти корень на данном интервале." << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }

    double c = a;

    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;
        double fc = calculateFunctionValue(coefficients, degree, c);

        if (fc == 0.0) {
            break;
        }

        if (fa * fc < 0) {
            b = c;
            fb = fc;
        }
        else {
            a = c;
            fa = fc;
        }
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

    double solution = solveEquationBisection(coefficients, degree, a, b);

    if (!std::isnan(solution)) {
        std::cout << "Решение уравнения: " << solution << std::endl;
    }

    return 0;
}
