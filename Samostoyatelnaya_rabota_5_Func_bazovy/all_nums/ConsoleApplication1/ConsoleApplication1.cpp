#include <iostream>
using namespace std;

// Функция для решения задачи 185
double calculateCylinderVolume(double radius, double height) {
    return 3.14 * radius * radius * height;
}

// Функция для решения задачи 186
int getMax(int a, int b) {
    return (a > b) ? a : b;
}

// Функция для решения задачи 187
char compareNumbers(int a, int b) {
    if (a > b) {
        return '>';
    }
    else if (a < b) {
        return '<';
    }
    else {
        return '=';
    }
}

// Функция для решения задачи 188
double calculateResistance(double resistance1, double resistance2, char connectionType) {
    if (connectionType == 'п') {
        return resistance1 + resistance2;
    }
    else if (connectionType == 'с') {
        return (resistance1 * resistance2) / (resistance1 + resistance2);
    }
    else {
        return -1;
    }
}

// Функция для решения задачи 189
double calculateLength(double a, double b) {
    return sqrt(a * a + b * b);
}

// Функция для решения задачи 190
double calculatePercentage(double number, double percentage) {
    return (number * percentage) / 100;
}

// Функция для решения задачи 191
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Функция для решения задачи 10.3 (без использования функции max)
int findMaxWithoutMax(int a, int b) {
    int maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    return maxVal;
}

// Функция для решения задачи 10.3 (с использованием функции max)
int findMaxWithMax(int a, int b) {
    return max(a, b);
}

// Функция для решения задачи 10.4 (без использования функции min)
int findMinWithoutMin(int a, int b) {
    int minVal = a;
    if (b < minVal) {
        minVal = b;
    }
    return minVal;
}

// Функция для решения задачи 10.4 (с использованием функции min)
int findMinWithMin(int a, int b) {
    return min(a, b);
}

// Функция для решения задачи 10.5 (без использования функции sign)
int findSignWithoutSign(int x, int y) {
    int signX = (x < 0) ? -1 : ((x > 0) ? 1 : 0);
    int signY = (y < 0) ? -1 : ((y > 0) ? 1 : 0);
    return signX + signY;
}

// Функция для решения задачи 10.5 (с использованием функции sign)
int findSignWithSign(int x, int y) {
    return sign(x) + sign(y);
}

int main() {
    setlocale(LC_ALL, "ru");

    // Примеры использования функций:
    double cylinderVolume = calculateCylinderVolume(3.0, 5.0);
    cout << "Объем цилиндра: " << cylinderVolume << endl;

    int maxVal = getMax(10, 20);
    cout << "Максимальное число: " << maxVal << endl;

    char comparison = compareNumbers(5, 8);
    cout << "Сравнение чисел: " << comparison << endl;

    double resistance = calculateResistance(10.0, 20.0, 'п');
    cout << "Сопротивление цепи (параллельное соединение): " << resistance << endl;

    double length = calculateLength(3.0, 4.0);
    cout << "Длина гипотенузы: " << length << endl;

    double percentage = calculatePercentage(200.0, 25.0);
    cout << "Процент от числа: " << percentage << endl;

    int fact = factorial(5);
    cout << "Факториал числа 5: " << fact << endl;

    int maxWithoutMax = findMaxWithoutMax(10, 20);
    cout << "Максимальное число (без использования функции max): " << maxWithoutMax << endl;

    int maxWithMax = findMaxWithMax(10, 20);
    cout << "Максимальное число (с использованием функции max): " << maxWithMax << endl;

    int minWithoutMin = findMinWithoutMin(10, 20);
    cout << "Минимальное число (без использования функции min): " << minWithoutMin << endl;

    int minWithMin = findMinWithMin(10, 20);
    cout << "Минимальное число (с использованием функции min): " << minWithMin << endl;

    int signWithoutSign = findSignWithoutSign(-5, 10);
    cout << "Значение sign (без использования функции sign): " << signWithoutSign << endl;

    int signWithSign = findSignWithSign(-5, 10);
    cout << "Значение sign (с использованием функции sign): " << signWithSign << endl;

    return 0;
}
