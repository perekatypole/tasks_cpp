#include <iostream>
#include <cmath>

const int ARRAY_SIZE = 10; // Размер массива вероятностей
const int VALUES[] = { 1, 2, 3, 4, 5, 6, 7 }; // Значения случайной величины
const double PROBABILITIES[] = { 0.1, 0.15, 0.2, 0.1, 0.2, 0.15, 0.1 }; // Вероятности значений

double calculateVariance(const int values[], const double probabilities[], int size) {
    double mean = 0.0;
    double meanSquared = 0.0;

    // Вычисление математического ожидания
    for (int i = 0; i < size; i++) {
        mean += values[i] * probabilities[i];
        meanSquared += std::pow(values[i], 2) * probabilities[i];
    }

    // Вычисление дисперсии
    double variance = meanSquared - std::pow(mean, 2);
    return variance;
}

int main() {
    double variance = calculateVariance(VALUES, PROBABILITIES, ARRAY_SIZE);
    std::cout << "Дисперсия случайной величины: " << variance << std::endl;

    return 0;
}
