#include <iostream>

double calculateDeterminant(double matrix[2][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int main() {
    double matrix[2][2];

    std::cout << "Введите элементы матрицы 2x2:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matrix[i][j];
        }
    }

    double determinant = calculateDeterminant(matrix);
    std::cout << "Определитель матрицы: " << determinant << std::endl;

    return 0;
}
