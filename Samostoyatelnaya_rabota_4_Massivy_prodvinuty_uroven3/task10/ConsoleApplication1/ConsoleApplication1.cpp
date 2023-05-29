#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

double calculateMean(int values[], double probabilities[], int size) {
    double mean = 0.0;

    for (int i = 0; i < size; i++) {
        mean += values[i] * probabilities[i];
    }

    return mean;
}

double calculateCentralMoment(int values[], double probabilities[], int size, int k, double mean) {
    double centralMoment = 0.0;

    for (int i = 0; i < size; i++) {
        centralMoment += pow(values[i] - mean, k) * probabilities[i];
    }

    return centralMoment;
}

int main() {
    int size, k;
    int values[MAX_SIZE];
    double probabilities[MAX_SIZE];

    std::cout << "Введите количество значений и вероятностей: ";
    std::cin >> size;

    std::cout << "Введите значения: ";
    for (int i = 0; i < size; i++) {
        std::cin >> values[i];
    }

    std::cout << "Введите вероятности: ";
    for (int i = 0; i < size; i++) {
        std::cin >> probabilities[i];
    }

    std::cout << "Введите порядок момента: ";
    std::cin >> k;

    double mean = calculateMean(values, probabilities, size);
    double centralMoment = calculateCentralMoment(values, probabilities, size, k, mean);

    std::cout << "Центральный момент порядка " << k << ": " << centralMoment << std::endl;

    return 0;
}
