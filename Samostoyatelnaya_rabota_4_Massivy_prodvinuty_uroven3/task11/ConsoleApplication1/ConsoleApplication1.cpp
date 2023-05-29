#include <iostream>

const int MAX_SIZE = 100;

double calculateAverage(int arr[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
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

    double average = calculateAverage(arr, size);
    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
