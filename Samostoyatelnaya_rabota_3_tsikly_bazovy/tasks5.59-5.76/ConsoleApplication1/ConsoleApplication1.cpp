#include <iostream>
#include <cmath>
using namespace std;

// Задача 5.59
double sequenceA(int n) {
    double a0 = 1;
    double ak = a0;
    for (int k = 1; k <= n; k++) {
        ak = ak * k - 1.0 / k;
    }
    return ak;
}

// Задача 5.60a
int fibonacciK(int k) {
    if (k <= 2)
        return 1;

    int prev1 = 1;
    int prev2 = 1;
    int result = 0;

    for (int i = 3; i <= k; i++) {
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }

    return result;
}

// Задача 5.60б
void fibonacciSeries(int p) {
    if (p <= 0)
        return;

    int prev1 = 1;
    int prev2 = 1;

    cout << prev1 << " " << prev2 << " ";

    for (int i = 3; i <= p; i++) {
        int result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
        cout << result << " ";
    }
}

// Задача 5.60в
bool isFibonacciSumEven(int p) {
    if (p <= 0)
        return false;

    int prev1 = 1;
    int prev2 = 1;
    int sum = prev1 + prev2;

    for (int i = 3; i <= p; i++) {
        int result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
        sum += result;
    }

    return sum % 2 == 0;
}

// Задача 5.61a
double sequenceB(int k) {
    if (k <= 2)
        return k;

    double numerator1 = 1;
    double numerator2 = 2;
    double denominator1 = 1;
    double denominator2 = 1;

    for (int i = 3; i <= k; i++) {
        double numerator = numerator1 + numerator2;
        double denominator = denominator1 + denominator2;
        numerator1 = numerator2;
        numerator2 = numerator;
        denominator1 = denominator2;
        denominator2 = denominator;
    }

    return numerator2 / denominator2;
}

// Задача 5.61б
void sequenceBFirstP(int p) {
    if (p <= 0)
        return;

    double numerator1 = 1;
    double numerator2 = 2;
    double denominator1 = 1;
    double denominator2 = 1;

    cout << numerator1 / denominator1 << " ";

    if (p == 1)
        return;

    cout << numerator2 / denominator2 << " ";

    for (int i = 3; i <= p; i++) {
        double numerator = numerator1 + numerator2;
        double denominator = denominator1 + denominator2;
        numerator1 = numerator2;
        numerator2 = numerator;
        denominator1 = denominator2;
        denominator2 = denominator;
        cout << numerator2 / denominator2 << " ";
    }
}

// Задача 5.61c
bool isSequenceBSumGreaterThanA(int p, double A) {
    if (p <= 0)
        return false;

    double numerator1 = 1;
    double numerator2 = 2;
    double denominator1 = 1;
    double denominator2 = 1;

    double sum = numerator1 / denominator1;

    if (p == 1)
        return sum > A;

    sum += numerator2 / denominator2;

    for (int i = 3; i <= p; i++) {
        double numerator = numerator1 + numerator2;
        double denominator = denominator1 + denominator2;
        numerator1 = numerator2;
        numerator2 = numerator;
        denominator1 = denominator2;
        denominator2 = denominator;
        sum += numerator2 / denominator2;
    }

    return sum > A;
}

// Задача 5.66
int sumOfNumbers(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) {
    return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
}

// Задача 5.67
double sumOfRealNumbers(int n, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        switch (i) {
        case 1:
            sum += a1;
            break;
        case 2:
            sum += a2;
            break;
        case 3:
            sum += a3;
            break;
        case 4:
            sum += a4;
            break;
        case 5:
            sum += a5;
            break;
        case 6:
            sum += a6;
            break;
        case 7:
            sum += a7;
            break;
        case 8:
            sum += a8;
            break;
        case 9:
            sum += a9;
            break;
        case 10:
            sum += a10;
            break;
        default:
            break;
        }
    }
    return sum;
}

// Задача 5.68
double totalMass(double m1, double m2, double m3, double m4, double m5, double m6, double m7, double m8, double m9, double m10, double m11, double m12) {
    return m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12;
}

// Задача 5.69
int totalPoints(int grade1, int grade2, int grade3, int grade4) {
    return grade1 + grade2 + grade3 + grade4;
}

// Задача 5.70
double totalSalary(double salary1, double salary2, double salary3, double salary4, double salary5, double salary6, double salary7, double salary8, double salary9, double salary10) {
    return salary1 + salary2 + salary3 + salary4 + salary5 + salary6 + salary7 + salary8 + salary9 + salary10;
}

// Задача 5.71
double totalCargoMass(double mass1, double mass2, double mass3, double mass4, double mass5, double mass6, double mass7, double mass8, double mass9, double mass10, double mass11, double mass12) {
    return mass1 + mass2 + mass3 + mass4 + mass5 + mass6 + mass7 + mass8 + mass9 + mass10 + mass11 + mass12;
}

// Задача 5.72
double totalResistance(double resistance1, double resistance2, double resistance3, double resistance4, double resistance5, double resistance6) {
    return resistance1 + resistance2 + resistance3 + resistance4 + resistance5 + resistance6;
}

// Задача 5.73
double totalParallelResistance(double resistance1, double resistance2, double resistance3, double resistance4, double resistance5, double resistance6) {
    return 1 / (1 / resistance1 + 1 / resistance2 + 1 / resistance3 + 1 / resistance4 + 1 / resistance5 + 1 / resistance6);
}

// Задача 5.74
int productOfNumbers(int a1, int a2, int a3, int a4, int a5, int a6) {
    return a1 * a2 * a3 * a4 * a5 * a6;
}

// Задача 5.75
int sumOfSquares(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) {
    return a1 * a1 + a2 * a2 + a3 * a3 + a4 * a4 + a5 * a5 + a6 * a6 + a7 * a7 + a8 * a8 + a9 * a9 + a10 * a10;
}

// Задача 5.76
double sumOfRealSquares(int n, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        switch (i) {
        case 1:
            sum += a1 * a1;
            break;
        case 2:
            sum += a2 * a2;
            break;
        case 3:
            sum += a3 * a3;
            break;
        case 4:
            sum += a4 * a4;
            break;
        case 5:
            sum += a5 * a5;
            break;
        case 6:
            sum += a6 * a6;
            break;
        case 7:
            sum += a7 * a7;
            break;
        case 8:
            sum += a8 * a8;
            break;
        case 9:
            sum += a9 * a9;
            break;
        case 10:
            sum += a10 * a10;
            break;
        default:
            break;
        }
    }
    return sum;
}

int main() {
    int n = 5;
    double A = 10.0;

    double resultA = sequenceA(n);
    int resultB = fibonacciK(n);
    fibonacciSeries(n);
    bool resultC = isFibonacciSumEven(n);
    double resultD = sequenceB(n);
    sequenceBFirstP(n);
    bool resultE = isSequenceBSumGreaterThanA(n, A);

    int sum1 = sumOfNumbers(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    double sum2 = sumOfRealNumbers(5, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0);
    double totalMassValue = totalMass(1.5, 2.0, 0.8, 1.2, 3.0, 2.5, 1.0, 0.5, 1.8, 2.3, 1.6, 0.7);
    int totalPointsValue = totalPoints(85, 90, 80, 95);
    double totalSalaryValue = totalSalary(1000.0, 1200.0, 1500.0, 1800.0, 2000.0, 2200.0, 2500.0, 2800.0, 3000.0, 3200.0);
    double totalCargoMassValue = totalCargoMass(0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0);
    double totalResistanceValue = totalResistance(10.0, 20.0, 15.0, 25.0, 30.0, 35.0);
    double totalParallelResistanceValue = totalParallelResistance(10.0, 20.0, 15.0, 25.0, 30.0, 35.0);
    int productValue = productOfNumbers(1, 2, 3, 4, 5, 6);
    int sumOfSquaresValue = sumOfSquares(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    double sumOfRealSquaresValue = sumOfRealSquares(5, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0);

    return 0;
}
