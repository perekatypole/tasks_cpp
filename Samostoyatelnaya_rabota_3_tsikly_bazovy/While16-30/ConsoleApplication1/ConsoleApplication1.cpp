#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // While16
    double P;
    int day = 1;
    double totalDistance = 10.0;

    cout << "Введите процент увеличения P (0 < P < 50) для задачи While16: ";
    cin >> P;

    while (totalDistance <= 200.0) {
        double increase = totalDistance * P / 100.0;
        totalDistance += increase;
        day++;
    }

    cout << "После " << day << " дня(ей) суммарный пробег превысит 200 км." << endl;
    cout << "Суммарный пробег: " << totalDistance << " км" << endl;

    // While17
    int N;
    cout << "Введите целое число N (> 0) для задачи While17: ";
    cin >> N;

    cout << "Цифры числа N, начиная справа: ";
    while (N > 0) {
        int digit = N % 10;
        cout << digit << " ";
        N /= 10;
    }
    cout << endl;

    // While18
    cout << "Введите целое число N (> 0) для задачи While18: ";
    cin >> N;

    int sumOfDigits = 0;
    int digitCount = 0;

    while (N > 0) {
        int digit = N % 10;
        sumOfDigits += digit;
        digitCount++;
        N /= 10;
    }

    cout << "Количество цифр: " << digitCount << endl;
    cout << "Сумма цифр: " << sumOfDigits << endl;

    // While19
    cout << "Введите целое число N (> 0) для задачи While19: ";
    cin >> N;

    int reversedNumber = 0;

    while (N > 0) {
        int digit = N % 10;
        reversedNumber = reversedNumber * 10 + digit;
        N /= 10;
    }

    cout << "Число, полученное при чтении числа N справа налево: " << reversedNumber << endl;

    // While20
    cout << "Введите целое число N (> 0) для задачи While20: ";
    cin >> N;

    bool hasDigitTwo = false;

    while (N > 0) {
        int digit = N % 10;
        if (digit == 2) {
            hasDigitTwo = true;
            break;
        }
        N /= 10;
    }

    cout << boolalpha;
    cout << "Цифра 2 " << (hasDigitTwo ? "присутствует" : "отсутствует") << " в записи числа N." << endl;

    // While21
    cout << "Введите целое число N (> 0) для задачи While21: ";
    cin >> N;

    bool hasOddDigits = false;

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 != 0) {
            hasOddDigits = true;
            break;
        }
        N /= 10;
    }

    cout << boolalpha;
    cout << "Нечетные цифры " << (hasOddDigits ? "присутствуют" : "отсутствуют") << " в записи числа N." << endl;

    // While22
    cout << "Введите целое число N (> 1) для задачи While22: ";
    cin >> N;

    bool isPrime = true;

    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << boolalpha;
    cout << "Число N " << (isPrime ? "является" : "не является") << " простым числом." << endl;

    // While23
    int A, B;
    cout << "Введите целое положительное число A для задачи While23: ";
    cin >> A;
    cout << "Введите целое положительное число B для задачи While23: ";
    cin >> B;

    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    cout << "Наибольший общий делитель (НОД) чисел A и B: " << A << endl;

    // While24
    cout << "Введите целое число N (> 1) для задачи While24: ";
    cin >> N;

    int F1 = 1, F2 = 1, FK;

    while (F2 < N) {
        FK = F2 + F1;
        F1 = F2;
        F2 = FK;
    }

    cout << boolalpha;
    cout << "Число N " << (F2 == N ? "является" : "не является") << " числом Фибоначчи." << endl;

    // While25
    cout << "Введите целое число N (> 1) для задачи While25: ";
    cin >> N;

    F1 = 1;
    F2 = 1;
    FK = F1 + F2;

    while (FK <= N) {
        F1 = F2;
        F2 = FK;
        FK = F1 + F2;
    }

    cout << "Первое число Фибоначчи, большее N: " << FK << endl;

    // While26
    cout << "Введите целое число N (> 1) для задачи While26: ";
    cin >> N;

    F1 = 1;
    F2 = 1;
    FK = F1 + F2;

    while (FK != N) {
        F1 = F2;
        F2 = FK;
        FK = F1 + F2;
    }

    int previousFibonacci = F1;
    int nextFibonacci = F1 + F2;

    cout << "Предыдущее число Фибоначчи: " << previousFibonacci << endl;
    cout << "Последующее число Фибоначчи: " << nextFibonacci << endl;

    // While27
    cout << "Введите целое число N (> 1) для задачи While27: ";
    cin >> N;

    F1 = 1;
    F2 = 1;
    FK = F1 + F2;
    int K = 3;

    while (FK != N) {
        F1 = F2;
        F2 = FK;
        FK = F1 + F2;
        K++;
    }

    cout << "Порядковый номер числа Фибоначчи N: " << K << endl;

    // While28
    double epsilon;
    cout << "Введите вещественное число ε (> 0) для задачи While28: ";
    cin >> epsilon;

    double AK = 2.0;
    double prevAK = 2.0;
    int K = 2;

    while (abs(AK - prevAK) >= epsilon) {
        double temp = AK;
        AK = 2.0 + 1.0 / prevAK;
        prevAK = temp;
        K++;
    }

    cout << "Номер K, для которого выполняется условие |AK − AK−1| < ε: " << K << endl;
    cout << "Значение AK−1: " << prevAK << endl;
    cout << "Значение AK: " << AK << endl;

    // While29
    cout << "Введите вещественное число ε (> 0) для задачи While29: ";
    cin >> epsilon;

    double A1 = 1.0, A2 = 2.0;
    AK = (A1 + 2 * A2) / 3.0;
    prevAK = A2;
    K = 3;

    while (abs(AK - prevAK) >= epsilon) {
        double temp = AK;
        AK = (prevAK + 2 * AK) / 3.0;
        prevAK = temp;
        K++;
    }

    cout << "Номер K, для которого выполняется условие |AK − AK−1| < ε: " << K << endl;
    cout << "Значение AK−1: " << prevAK << endl;
    cout << "Значение AK: " << AK << endl;

    // While30
    int A, B, C;
    cout << "Введите положительное число A для задачи While30: ";
    cin >> A;
    cout << "Введите положительное число B для задачи While30: ";
    cin >> B;
    cout << "Введите положительное число C для задачи While30: ";
    cin >> C;

    int count = 0;

    while (A >= C && B >= C) {
        A -= C;
        B -= C;
        count++;
    }

    cout << "Количество квадратов, размещенных на прямоугольнике: " << count << endl;

    return 0;
}
