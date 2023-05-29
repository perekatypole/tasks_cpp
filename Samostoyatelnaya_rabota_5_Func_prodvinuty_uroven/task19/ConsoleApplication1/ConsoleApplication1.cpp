#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

void calculateRegressionParameters(double xValues[], double yValues[], int size, double& a, double& b) {
    double sumX = 0.0;
    double sumY = 0.0;
    double sumXY = 0.0;
    double sumX2 = 0.0;

    for (int i = 0; i < size; i++) {
        sumX += xValues[i];
        sumY += yValues[i];
        sumXY += xValues[i] * yValues[i];
        sumX2 += xValues[i] * xValues[i];
    }

    double denominator = size * sumX2 - sumX * sumX;

    if (denominator != 0) {
        a = (size * sumXY - sumX * sumY) / denominator;
        b = (sumY - a * sumX) / size;
    }
    else {
        std::cout << "Невозможно вычислить параметры a и b." << std::endl;
    }
}

int main() {
    int size;
    double xValues[MAX_SIZE];
    double yValues[MAX_SIZE];
    double a, b;
    char choice;

    do {
        std::cout << "Введите количество точек: ";
        std::cin >> size;

        std::cout << "Введите значения x и y: " << std::endl;
        for (int i = 0; i < size; i++) {
            std::cin >> xValues[i] >> yValues[i];
        }

        calculateRegressionParameters(xValues, yValues, size, a, b);

        std::cout << "Параметры регрессионной модели (f(x) = a * x + b):" << std::endl;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;

        std::cout << "Хотите продолжить? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
