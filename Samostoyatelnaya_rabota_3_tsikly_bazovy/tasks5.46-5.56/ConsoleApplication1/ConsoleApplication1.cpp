#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // 5.45
    double a;
    int n;

    cout << "Введите вещественное число а: ";
    cin >> a;
    cout << "Введите натуральное число n: ";
    cin >> n;

    cout << "Значения: ";
    double current = a;
    for (int i = 1; i <= n; i++) {
        cout << current << " ";
        current *= a;
    }
    cout << endl;

    // 5.46
    int p;
    cout << "Введите натуральное число p: ";
    cin >> p;

    int factorial = 1;
    for (int i = 1; i <= p; i++) {
        factorial *= i;
    }

    cout << "Факториал числа p: " << factorial << endl;

    // 5.47
    double a;
    int n;

    cout << "Введите вещественное число а: ";
    cin >> a;
    cout << "Введите натуральное число n: ";
    cin >> n;

    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= a;
    }

    cout << "Результат: " << result << endl;

    // 5.48
    int hours;

    cout << "Введите количество часов: ";
    cin >> hours;

    int cells = 1;
    for (int i = 3; i <= hours; i += 3) {
        cells *= 2;
    }

    cout << "Количество клеток: " << cells << endl;

    // 5.49
    double deposit = 1000.0;
    double interest = 0.02;

    cout << "Прирост суммы вклада за первый, второй, ..., десятый месяц: ";
    for (int month = 1; month <= 10; month++) {
        double growth = deposit * interest;
        deposit += growth;
        cout << growth << " ";
    }
    cout << endl;

    cout << "Сумма вклада через три, четыре, ..., двенадцать месяцев: ";
    for (int month = 3; month <= 12; month++) {
        double growth = deposit * interest;
        deposit += growth;
        cout << deposit << " ";
    }
    cout << endl;

    // 5.50
    double distance = 10.0;

    cout << "Пробег лыжника за второй, третий, ..., десятый день тренировок: ";
    for (int day = 2; day <= 10; day++) {
        distance *= 1.1;
        cout << distance << " ";
    }
    cout << endl;

    double totalDistance = 0.0;
    cout << "Суммарный путь за первые 7 дней тренировок: ";
    for (int day = 1; day <= 7; day++) {
        totalDistance += distance;
        distance *= 1.1;
    }
    cout << totalDistance << endl;

    // 5.51
    double area = 100.0;
    double yield = 20.0;

    cout << "Урожайность за второй, третий, ..., восьмой год: ";
    for (int year = 2; year <= 8; year++) {
        area *= 1.05;
        yield *= 1.02;
        double harvest = area * yield;
        cout << harvest << " ";
    }
    cout << endl;

    cout << "Площадь участка в четвертый, пятый, ..., седьмой год: ";
    for (int year = 4; year <= 7; year++) {
        area *= 1.05;
        cout << area << " ";
    }
    cout << endl;

    double totalHarvest = 0.0;
    cout << "Урожай за первые шесть лет: ";
    for (int year = 1; year <= 6; year++) {
        area *= 1.05;
        yield *= 1.02;
        double harvest = area * yield;
        totalHarvest += harvest;
    }
    cout << totalHarvest << endl;

    // 5.52
    const double pi = 3.14159;
    const double thickness = 0.005;
    const double innerDiameter = 10.0;

    double volume = 0.0;
    double radius = (innerDiameter + 2 * thickness) / 2.0;

    for (int i = 1; i <= 12; i++) {
        volume += 4.0 / 3.0 * pi * radius * radius * radius;
        radius += thickness;
    }

    cout << "Суммарный объем в литрах: " << volume << endl;

    // 5.53
    int sumFactorial = 0;

    cout << "Введите значение n (1 < n < 10): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sumFactorial += factorial;
    }

    cout << "Сумма: " << sumFactorial << endl;

    // 5.54
    double sumSeries = 0.0;

    cout << "Введите значение п (1 < п < 10): ";
    cin >> a;

    int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
        sumSeries += 1.0 / factorial;
    }

    cout << "Сумма: " << sumSeries << endl;

    return 0;
}
