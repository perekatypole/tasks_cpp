#include <iostream>

const int MAX_SIZE = 100;

double calculateMoment(int values[], double probabilities[], int size, int k) {
    double moment = 0.0;

    for (int i = 0; i < size; i++) {
        moment += pow(values[i], k) * probabilities[i];
    }

    return moment;
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

    double result = calculateMoment(values, probabilities, size, k);
    std::cout << "Момент порядка " << k << ": " << result << std::endl;

    return 0;
}
