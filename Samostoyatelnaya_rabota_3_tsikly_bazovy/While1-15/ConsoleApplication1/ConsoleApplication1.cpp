#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // While1
    int A, B;
    cout << "Введите положительные числа A и B (A > B) для задачи While1: ";
    cin >> A >> B;

    int remainder = A;

    while (remainder >= B) {
        remainder -= B;
    }

    cout << "Длина незанятой части отрезка A: " << remainder << endl;

    // While2
    int count = 0;
    remainder = A;

    while (remainder >= B) {
        remainder -= B;
        count++;
    }

    cout << "Количество отрезков B, размещенных на отрезке A: " << count << endl;

    // While3
    int N, K;
    cout << "Введите целые положительные числа N и K для задачи While3: ";
    cin >> N >> K;

    int quotient = 0;
    int remainder2 = N;

    while (remainder2 >= K) {
        remainder2 -= K;
        quotient++;
    }

    cout << "Частное от деления нацело N на K: " << quotient << endl;
    cout << "Остаток от деления нацело N на K: " << remainder2 << endl;

    // While4
    cout << "Введите целое число N (> 0) для задачи While4: ";
    cin >> N;

    int power = 1;

    while (power < N) {
        power *= 3;
    }

    bool isPowerOfThree = (power == N);

    cout << (isPowerOfThree ? "TRUE" : "FALSE") << endl;

    // While5
    cout << "Введите целое число N (> 0), являющееся степенью числа 2, для задачи While5: ";
    cin >> N;

    int exponent = 0;

    while (N % 2 == 0) {
        N /= 2;
        exponent++;
    }

    cout << "Показатель степени числа 2: " << exponent << endl;

    // While6
    cout << "Введите целое число N (> 0) для задачи While6: ";
    cin >> N;

    double doubleFactorial = 1.0;

    if (N % 2 == 0) {
        for (int i = N; i >= 2; i -= 2) {
            doubleFactorial *= i;
        }
    }
    else {
        for (int i = N; i >= 1; i -= 2) {
            doubleFactorial *= i;
        }
    }

    cout << "Двойной факториал N: " << doubleFactorial << endl;

    // While7
    cout << "Введите целое число N (> 0) для задачи While7: ";
    cin >> N;

    int K = 1;

    while (K * K <= N) {
        K++;
    }

    cout << "Наименьшее целое положительное число K, квадрат которого превосходит N: " << K << endl;

    // While8
    cout << "Введите целое число N (> 0) для задачи While8: ";
    cin >> N;

    K = 1;

    while ((K + 1) * (K + 1) <= N) {
        K++;
    }

    cout << "Наибольшее целое число K, квадрат которого не превосходит N: " << K << endl;

    // While9
    cout << "Введите целое число N (> 1) для задачи While9: ";
    cin >> N;

    K = 1;

    while (3 * K <= N) {
        K++;
    }

    cout << "Наименьшее целое число K, при котором выполняется неравенство 3K > N: " << K << endl;

    // While10
    cout << "Введите целое число N (> 1) для задачи While10: ";
    cin >> N;

    K = N / 3;

    cout << "Наибольшее целое число K, при котором выполняется неравенство 3K < N: " << K << endl;

    // While11
    cout << "Введите целое число N (> 1) для задачи While11: ";
    cin >> N;

    int sum = 0;
    K = 1;

    while (sum < N) {
        sum += K;
        K++;
    }

    cout << "Наименьшее число K, для которого сумма 1 + 2 + ... + K >= N: " << K - 1 << endl;
    cout << "Сумма: " << sum << endl;

    // While12
    cout << "Введите целое число N (> 1) для задачи While12: ";
    cin >> N;

    sum = 0;
    K = 1;

    while (sum <= N) {
        sum += K;
        K++;
    }

    cout << "Наибольшее число K, для которого сумма 1 + 2 + ... + K < N: " << K - 2 << endl;
    cout << "Сумма: " << sum - (K - 1) << endl;

    // While13
    double A;
    cout << "Введите число A (> 1) для задачи While13: ";
    cin >> A;

    double sum1 = 0.0;
    K = 1;

    while (sum1 <= A) {
        sum1 += 1.0 / K;
        K++;
    }

    cout << "Наименьшее число K, для которого сумма 1 + 1/2 + ... + 1/K > A: " << K - 1 << endl;
    cout << "Сумма: " << sum1 << endl;

    // While14
    cout << "Введите число A (> 1) для задачи While14: ";
    cin >> A;

    double sum2 = 0.0;
    K = 1;

    while (sum2 < A) {
        sum2 += 1.0 / K;
        K++;
    }

    cout << "Наибольшее число K, для которого сумма 1 + 1/2 + ... + 1/K < A: " << K - 2 << endl;
    cout << "Сумма: " << sum2 - (1.0 / (K - 1)) << endl;

    // While15
    double P;
    cout << "Введите вещественное число P (0 < P < 25) для задачи While15: ";
    cin >> P;

    int months = 0;
    double deposit = 1000.0;

    while (deposit <= 1100.0) {
        deposit += (P / 100.0) * deposit;
        months++;
    }

    cout << "Количество месяцев: " << months << endl;
    cout << "Итоговый размер вклада: " << deposit << " руб." << endl;

    return 0;
}
