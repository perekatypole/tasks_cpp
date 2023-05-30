#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");

    // 5.21
    int candyPrice;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> candyPrice;
    for (int weight = 100; weight <= 2000; weight += 100) {
        cout << "Стоимость " << weight << " г конфет: " << (weight * candyPrice / 1000.0) << endl;
    }

    // 5.72
    for (int i = 1; i <= 8; i++) {
        cout << "2," << i << endl;
    }

    // 5.23
    for (int i = 1; i <= 9; i++) {
        cout << "3," << i << endl;
    }

    // 5.24
    for (int i = 2; i <= 4; i++) {
        for (int j = 2; j <= 6; j += 2) {
            cout << i << "," << j << endl;
        }
    }

    // 5.25
    for (int i = 4; i <= 6; i++) {
        for (int j = 4; j <= 8; j += 2) {
            cout << i << "," << j << endl;
        }
    }

    // 5.26
    int sum26a = 0;
    for (int i = 100; i <= 500; i++) {
        sum26a += i;
    }
    cout << "Сумма всех целых чисел от 100 до 500: " << sum26a << endl;

    int a26b;
    cout << "Введите число A: ";
    cin >> a26b;
    int sum26b = 0;
    for (int i = a26b; i <= 500; i++) {
        sum26b += i;
    }
    cout << "Сумма всех целых чисел от " << a26b << " до 500: " << sum26b << endl;

    int b26c;
    cout << "Введите число B: ";
    cin >> b26c;
    int sum26c = 0;
    for (int i = -10; i <= b26c; i++) {
        sum26c += i;
    }
    cout << "Сумма всех целых чисел от -10 до " << b26c << ": " << sum26c << endl;

    int a26d, b26d;
    cout << "Введите число A: ";
    cin >> a26d;
    cout << "Введите число B: ";
    cin >> b26d;
    int sum26d = 0;
    for (int i = a26d; i <= b26d; i++) {
        sum26d += i;
    }
    cout << "Сумма всех целых чисел от " << a26d << " до " << b26d << ": " << sum26d << endl;

    // 5.27
    int x27, y27;
    cout << "Введите числа x и y: ";
    cin >> x27 >> y27;
    int product27 = 0;
    for (int i = 1; i <= y27; i++) {
        product27 += x27;
    }
    cout << "Произведение x * y: " << product27 << endl;

    // 5.28
    int product28a = 1;
    for (int i = 8; i <= 15; i++) {
        product28a *= i;
    }
    cout << "Произведение всех целых чисел от 8 до 15: " << product28a << endl;

    int a28b;
    cout << "Введите число A: ";
    cin >> a28b;
    int product28b = 1;
    for (int i = a28b; i <= 20; i++) {
        product28b *= i;
    }
    cout << "Произведение всех целых чисел от " << a28b << " до 20: " << product28b << endl;

    int b28c;
    cout << "Введите число B: ";
    cin >> b28c;
    int product28c = 1;
    for (int i = 1; i <= b28c; i++) {
        product28c *= i;
    }
    cout << "Произведение всех целых чисел от 1 до " << b28c << ": " << product28c << endl;

    int a28d, b28d;
    cout << "Введите число A: ";
    cin >> a28d;
    cout << "Введите число B: ";
    cin >> b28d;
    int product28d = 1;
    for (int i = a28d; i <= b28d; i++) {
        product28d *= i;
    }
    cout << "Произведение всех целых чисел от " << a28d << " до " << b28d << ": " << product28d << endl;

    // 5.29
    double average29a = 0;
    for (int i = 1; i <= 1000; i++) {
        average29a += i;
    }
    average29a /= 1000;
    cout << "Среднее арифметическое всех целых чисел от 1 до 1000: " << average29a << endl;

    int b29b;
    cout << "Введите число B: ";
    cin >> b29b;
    double average29b = 0;
    for (int i = 100; i <= b29b; i++) {
        average29b += i;
    }
    average29b /= (b29b - 100 + 1);
    cout << "Среднее арифметическое всех целых чисел от 100 до " << b29b << ": " << average29b << endl;

    int a29c, b29c;
    cout << "Введите число A: ";
    cin >> a29c;
    cout << "Введите число B: ";
    cin >> b29c;
    double average29c = 0;
    for (int i = a29c; i <= 200; i++) {
        average29c += i;
    }
    average29c /= (200 - a29c + 1);
    cout << "Среднее арифметическое всех целых чисел от " << a29c << " до 200: " << average29c << endl;

    int a29d, b29d;
    cout << "Введите число A: ";
    cin >> a29d;
    cout << "Введите число B: ";
    cin >> b29d;
    double average29d = 0;
    for (int i = a29d; i <= b29d; i++) {
        average29d += i;
    }
    average29d /= (b29d - a29d + 1);
    cout << "Среднее арифметическое всех целых чисел от " << a29d << " до " << b29d << ": " << average29d << endl;

    // 5.30
    int sumCubes30a = 0;
    for (int i = 20; i <= 40; i++) {
        sumCubes30a += i * i * i;
    }
    cout << "Сумма кубов всех целых чисел от 20 до 40: " << sumCubes30a << endl;

    int a30b;
    cout << "Введите число A: ";
    cin >> a30b;
    int sumSquares30b = 0;
    for (int i = a30b; i <= 50; i++) {
        sumSquares30b += i * i;
    }
    cout << "Сумма квадратов всех целых чисел от " << a30b << " до 50: " << sumSquares30b << endl;

    int n30c;
    cout << "Введите число n: ";
    cin >> n30c;
    int sumSquares30c = 0;
    for (int i = 1; i <= n30c; i++) {
        sumSquares30c += i * i;
    }
    cout << "Сумма квадратов всех целых чисел от 1 до " << n30c << ": " << sumSquares30c << endl;

    int a30d, b30d;
    cout << "Введите число A: ";
    cin >> a30d;
    cout << "Введите число B: ";
    cin >> b30d;
    int sumSquares30d = 0;
    for (int i = a30d; i <= b30d; i++) {
        sumSquares30d += i * i;
    }
    cout << "Сумма квадратов всех целых чисел от " << a30d << " до " << b30d << ": " << sumSquares30d << endl;

    // 5.31
    int n31;
    cout << "Введите число n: ";
    cin >> n31;
    int sumSeries31 = 0;
    for (int i = 1; i <= n31; i++) {
        sumSeries31 += (i * i + (i + 1) * (i + 1));
    }
    cout << "Сумма п2+(n+ l)2+ ... + (2n)2: " << sumSeries31 << endl;

    // 5.33
    int n33;
    cout << "Введите число n: ";
    cin >> n33;
    double sumSeries33 = 0;
    for (int i = 1; i <= n33; i++) {
        sumSeries33 += 1.0 / i;
    }
    cout << "Сумма 1/1 + 1/2 + ... + 1/n: " << sumSeries33 << endl;

    // 5.34
    int n34;
    cout << "Введите число n: ";
    cin >> n34;
    double sumSeries34 = 0;
    for (int i = 1; i <= n34; i++) {
        sumSeries34 += 1.0 / (i * (i + 1));
    }
    cout << "Сумма 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1)): " << sumSeries34 << endl;

    // 5.35
    int n35;
    cout << "Введите число n: ";
    cin >> n35;
    double sumSeries35 = 0;
    for (int i = 1; i <= n35; i++) {
        sumSeries35 += factorial(i);
    }
    cout << "Сумма факториалов от 1 до " << n35 << ": " << sumSeries35 << endl;

    return 0;
}
