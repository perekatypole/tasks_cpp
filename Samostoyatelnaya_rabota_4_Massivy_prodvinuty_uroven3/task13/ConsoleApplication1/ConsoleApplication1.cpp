#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

double calculateVariance(int arr[], int size) {
    double sum = 0.0;
    double average = 0.0;

    // Вычисляем среднее арифметическое элементов массива
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    average = sum / size;

    // Вычисляем сумму квадратов разностей между элементами и средним арифметическим
    double sumSquares = 0.0;
    for (int i = 0; i < size; i++) {
        double diff = arr[i] - average;
        sumSquares += diff * diff;
    }

    // Вычисляем выборочную дисперсию
    double variance = sumSquares / size;
    return variance;
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

    double variance = calculateVariance(arr, size);
    std::cout << "Выборочная дисперсия: " << variance << std::endl;

    return 0;
}
