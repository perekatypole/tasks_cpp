#include <iostream>

const int MAX_SIZE = 100;

void calculateRegressionParameters(double xValues[], double yValues[], int size, double& a, double& b) {
    double sumX = 0.0;
    double sumY = 0.0;
    double sumXY = 0.0;
    double sumXX = 0.0;

    for (int i = 0; i < size; i++) {
        sumX += xValues[i];
        sumY += yValues[i];
        sumXY += xValues[i] * yValues[i];
        sumXX += xValues[i] * xValues[i];
    }

    double denominator = size * sumXX - sumX * sumX;

    if (denominator != 0) {
        a = (size * sumXY - sumX * sumY) / denominator;
        b = (sumY - a * sumX) / size;
    }
    else {
        // Handle the case when denominator is zero to avoid division by zero
        a = 0.0;
        b = 0.0;
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

        std::cout << "Введите значения x: ";
        for (int i = 0; i < size; i++) {
            std::cin >> xValues[i];
        }

        std::cout << "Введите значения y: ";
        for (int i = 0; i < size; i++) {
            std::cin >> yValues[i];
        }

        calculateRegressionParameters(xValues, yValues, size, a, b);

        std::cout << "Параметры регрессионной модели (f(x) = a + b/x):" << std::endl;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;

        std::cout << "Хотите продолжить? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
