#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    float X;

    // For19
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    float factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    cout << "N! = " << factorial << endl;

    // For20
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    float sum = 0;
    factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += factorial;
    }
    cout << "Сумма факториалов = " << sum << endl;

    // For21
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    sum = 0;
    factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += 1 / factorial;
    }
    cout << "Сумма = " << sum << endl;

    // For22
    cout << "Введите вещественное число X: ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    float result = 1;
    factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
        result += pow(X, i) / factorial;
    }
    cout << "Значение выражения = " << result << endl;

    // For23
    cout << "Введите вещественное число X: ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = X;
    float sign = -1;
    factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= (2 * i) * (2 * i + 1);
        result += sign * pow(X, 2 * i + 1) / factorial;
        sign *= -1;
    }
    cout << "Значение выражения = " << result << endl;

    // For24
    cout << "Введите вещественное число X: ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = 1;
    sign = -1;
    factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= (2 * i) * (2 * i - 1);
        result += sign * pow(X, 2 * i) / factorial;
        sign *= -1;
    }
    cout << "Значение выражения = " << result << endl;

    // For25
    cout << "Введите вещественное число X (|X| < 1): ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = X;
    sign = -1;
    float denominator = 1;
    for (int i = 2; i <= N; i++) {
        denominator *= i;
        result += sign * pow(X, i) / denominator;
        sign *= -1;
    }
    cout << "Значение выражения = " << result << endl;

    // For26
    cout << "Введите вещественное число X (|X| < 1): ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = X;
    sign = -1;
    denominator = 1;
    for (int i = 1; i <= N; i++) {
        denominator *= (2 * i) * (2 * i + 1);
        result += sign * pow(X, 2 * i + 1) / denominator;
        sign *= -1;
    }
    cout << "Значение выражения = " << result << endl;

    // For27
    cout << "Введите вещественное число X (|X| < 1): ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = X;
    float numerator = 1;
    denominator = 1;
    for (int i = 1; i <= N; i++) {
        numerator *= (2 * i - 1);
        denominator *= (2 * i) * (2 * i + 1);
        result += numerator * pow(X, 2 * i + 1) / denominator;
    }
    cout << "Значение выражения = " << result << endl;

    // For28
    cout << "Введите вещественное число X (|X| < 1): ";
    cin >> X;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    result = 1;
    sign = 1;
    numerator = 1;
    denominator = 1;
    for (int i = 1; i <= N; i++) {
        numerator *= (2 * i - 1);
        denominator *= (2 * i);
        result += sign * numerator * pow(X, i) / denominator;
        sign *= -1;
    }
    cout << "Значение выражения = " << result << endl;

    // For29
    cout << "Введите целое число N (> 1): ";
    cin >> N;
    float A, B;

    cout << "Введите вещественную точку A: ";
    cin >> A;
    cout << "Введите вещественную точку B (A < B): ";
    cin >> B;

    float H = (B - A) / N;
    cout << "H = " << H << endl;

    cout << "Набор точек: ";
    for (int i = 0; i <= N; i++) {
        cout << A + i * H << " ";
    }
    cout << endl;

    // For30
    cout << "Введите целое число N (> 1): ";
    cin >> N;

    cout << "Введите вещественную точку A: ";
    cin >> A;
    cout << "Введите вещественную точку B (A < B): ";
    cin >> B;

    H = (B - A) / N;
    cout << "H = " << H << endl;

    cout << "Значения функции F(X): ";
    for (int i = 0; i <= N; i++) {
        float X = A + i * H;
        cout << 1 - sin(X) << " ";
    }
    cout << endl;

    // For31
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    float AK = 2;
    cout << "Последовательность A1, A2, ..., AN: ";
    cout << AK << " ";

    for (int K = 1; K < N; K++) {
        AK = 2 + 1 / AK;
        cout << AK << " ";
    }
    cout << endl;

    // For32
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    AK = 1;
    cout << "Последовательность A1, A2, ..., AN: ";
    cout << AK << " ";

    for (int K = 1; K < N; K++) {
        AK = (AK + 1) / K;
        cout << AK << " ";
    }
    cout << endl;

    return 0;
}
