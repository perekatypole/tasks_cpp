#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // For33
    int N;
    cout << "Введите целое число N (> 1) для задачи For33: ";
    cin >> N;

    int F1 = 1, F2 = 1, FK;

    cout << "Последовательность чисел Фибоначчи: ";
    cout << F1 << " " << F2 << " ";

    for (int K = 3; K <= N; K++) {
        FK = F2 + F1;
        cout << FK << " ";
        F1 = F2;
        F2 = FK;
    }
    cout << endl;

    // For34
    cout << "Введите целое число N (> 1) для задачи For34: ";
    cin >> N;

    double A1 = 1, A2 = 2, AK;

    cout << "Последовательность вещественных чисел: ";
    cout << A1 << " " << A2 << " ";

    for (int K = 3; K <= N; K++) {
        AK = (A2 + 2 * A1) / 3;
        cout << AK << " ";
        A1 = A2;
        A2 = AK;
    }
    cout << endl;

    // For35
    cout << "Введите целое число N (> 2) для задачи For35: ";
    cin >> N;

    int A3 = 3, AK;

    cout << "Последовательность целых чисел: ";
    cout << "1 2 3 ";

    for (int K = 4; K <= N; K++) {
        AK = A3 + A2 - 2 * A1;
        cout << AK << " ";
        A1 = A2;
        A2 = A3;
        A3 = AK;
    }
    cout << endl;

    // For36
    int K;
    cout << "Введите целое положительное число N для задачи For36: ";
    cin >> N;
    cout << "Введите целое положительное число K для задачи For36: ";
    cin >> K;

    double sum = 0.0;

    for (int i = 1; i <= N; i++) {
        sum += pow(i, K);
    }

    cout << "Сумма: " << sum << endl;

    // For37
    cout << "Введите целое число N (> 0) для задачи For37: ";
    cin >> N;

    double sum2 = 0.0;

    for (int i = 1; i <= N; i++) {
        sum2 += pow(i, 2);
    }

    cout << "Сумма: " << sum2 << endl;

    // For38
    cout << "Введите целое число N (> 0) для задачи For38: ";
    cin >> N;

    double sum3 = 0.0;

    for (int i = N; i >= 1; i--) {
        sum3 += 1.0 / i;
    }

    cout << "Сумма: " << sum3 << endl;
    return 0;
}
