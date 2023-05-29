#include <iostream>
#include <cstdlib>
#include <ctime>

const int ARRAY_SIZE = 10; // Размер массива

int findMaxElement(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[ARRAY_SIZE];
    srand(time(0)); // Инициализация генератора случайных чисел

    // Заполнение массива случайными числами
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100; // Генерация случайного числа от 0 до 99
        std::cout << arr[i] << " ";
    }

    int maxElement = findMaxElement(arr, ARRAY_SIZE);
    std::cout << "\nНаибольший элемент массива: " << maxElement << std::endl;

    return 0;
}
