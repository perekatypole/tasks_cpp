#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

double calculateRMS(int array[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += std::pow(array[i], 2);
    }

    double meanSquare = sum / size;
    double rms = std::sqrt(meanSquare);

    return rms;
}

int main() {
    int size;
    int array[MAX_SIZE];

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    double rms = calculateRMS(array, size);
    std::cout << "Среднеквадратичное значение: " << rms << std::endl;

    return 0;
}
