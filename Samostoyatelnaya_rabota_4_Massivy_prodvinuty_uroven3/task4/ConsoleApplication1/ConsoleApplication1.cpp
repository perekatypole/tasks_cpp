#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления собственных чисел матрицы
void calculateEigenvalues(double a11, double a12, double a21, double a22)
{
    double trace = a11 + a22;  // След матрицы
    double det = a11 * a22 - a12 * a21;  // Определитель матрицы

    // Вычисление собственных чисел
    double discriminant = trace * trace - 4 * det;

    if (discriminant > 0) // Собственные числа вещественные
    {
        double eigenvalue1 = (trace + sqrt(discriminant)) / 2;
        double eigenvalue2 = (trace - sqrt(discriminant)) / 2;

        cout << "Собственное значение 1: " << eigenvalue1 << endl;
        cout << "Собственное значение 2: " << eigenvalue2 << endl;
    }
    else if (discriminant == 0) // Оба собственных числа совпадают
    {
        double eigenvalue = trace / 2;

        cout << "Оба собственных значения равны: " << eigenvalue << endl;
    }
    else // Собственные числа комплексные
    {
        double realPart = trace / 2;
        double imaginaryPart = sqrt(-discriminant) / 2;

        cout << "Собственное значение 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Собственное значение 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main()
{
    double a11, a12, a21, a22;

    cout << "Введите элементы матрицы A:" << endl;
    cout << "a11: ";
    cin >> a11;
    cout << "a12: ";
    cin >> a12;
    cout << "a21: ";
    cin >> a21;
    cout << "a22: ";
    cin >> a22;

    calculateEigenvalues(a11, a12, a21, a22);

    return 0;
}
