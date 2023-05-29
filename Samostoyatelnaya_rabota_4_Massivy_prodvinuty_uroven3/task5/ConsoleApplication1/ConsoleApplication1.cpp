#include <iostream>

// Функция для вычисления определителя матрицы 3x3
int determinant(int matrix[3][3]) {
    int det = 0;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}

int main() {
    int matrix[3][3];

    std::cout << "Введите элементы матрицы 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    int det = determinant(matrix);

    std::cout << "Определитель матрицы равен: " << det << std::endl;

    return 0;
}
