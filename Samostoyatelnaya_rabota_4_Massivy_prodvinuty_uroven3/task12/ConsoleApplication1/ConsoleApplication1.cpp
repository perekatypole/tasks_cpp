#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

double calculateMeanSquare(int arr[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += pow(arr[i], 2);
    }

    double meanSquare = sqrt(sum / size);
    return meanSquare;
}

int main() {
    int size;
    int arr[MAX_SIZE];

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    double meanSquare = calculateMeanSquare(arr, size);
    std::cout << "Среднеквадратичное значение: " << meanSquare << std::endl;

    return 0;
}
