#include <iostream>

const int MAX_SIZE = 100;

double calculateScalarProduct(double vector1[], double vector2[], int size) {
    double result = 0.0;

    for (int i = 0; i < size; i++) {
        result += vector1[i] * vector2[i];
    }

    return result;
}

int main() {
    int size;
    double vector1[MAX_SIZE];
    double vector2[MAX_SIZE];

    std::cout << "Введите размер векторов: ";
    std::cin >> size;

    std::cout << "Введите элементы первого вектора: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Введите элементы второго вектора: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector2[i];
    }

    double scalarProduct = calculateScalarProduct(vector1, vector2, size);
    std::cout << "Скалярное произведение векторов: " << scalarProduct << std::endl;

    return 0;
}
