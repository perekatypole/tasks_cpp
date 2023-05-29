#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_SIZE = 100;

int findExtremum(int array[], int size, bool findMax) {
    int extremum = array[0];

    for (int i = 1; i < size; i++) {
        if (findMax) {
            if (array[i] > extremum) {
                extremum = array[i];
            }
        }
        else {
            if (array[i] < extremum) {
                extremum = array[i];
            }
        }
    }

    return extremum;
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

    bool findMax;
    std::cout << "Вы хотите найти наибольший элемент? (1 - Да, 0 - Нет): ";
    std::cin >> findMax;

    int extremum = findExtremum(array, size, findMax);
    std::cout << "Экстремальный элемент: " << extremum << std::endl;

    return 0;
}
