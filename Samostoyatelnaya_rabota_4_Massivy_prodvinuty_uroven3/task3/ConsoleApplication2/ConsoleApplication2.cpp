#include <iostream>

const int MAX_SIZE = 100;

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns)
{
    int transposed[MAX_SIZE][MAX_SIZE];

    // Выполняем транспонирование матрицы
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Выводим транспонированную матрицу
    std::cout << "Транспонированная матрица:" << std::endl;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    // Вводим размеры матрицы
    std::cout << "Введите количество строк матрицы: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> columns;

    // Вводим элементы матрицы
    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // Выполняем транспонирование матрицы
    transposeMatrix(matrix, rows, columns);

    return 0;
}
