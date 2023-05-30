#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void task5_6() {
    cout << "5.6. Таблица стоимости товара:\n";
    for (int i = 2; i <= 20; i++) {
        cout << i << " шт. - " << fixed << setprecision(2) << i * 20.4 << " руб.\n";
    }
}

void task5_7() {
    cout << "5.7. Таблица соответствия веса в фунтах и килограммах:\n";
    for (int pounds = 1; pounds <= 10; pounds++) {
        double kilograms = pounds * 0.453;
        cout << pounds << " фунт = " << kilograms << " кг\n";
    }
}

void task5_8() {
    cout << "5.8. Таблица перевода расстояний в дюймах в сантиметры:\n";
    for (int inches = 10; inches <= 22; inches++) {
        double centimeters = inches * 25.4;
        cout << inches << " дюйм = " << centimeters << " см\n";
    }
}

void task5_9() {
    cout << "5.9. Расстояние до линии горизонта от точки на высоте:\n";
    const double R = 6350.0;
    for (int height = 1; height <= 10; height++) {
        double distance = sqrt(2 * R * height + height * height);
        cout << "Высота " << height << " км: " << distance << " км\n";
    }
}

void task5_10() {
    cout << "5.10. Таблица перевода долларов США в рубли:\n";
    double exchangeRate;
    cout << "Введите текущий курс доллара: ";
    cin >> exchangeRate;
    for (int dollars = 1; dollars <= 20; dollars++) {
        double rubles = dollars * exchangeRate;
        cout << dollars << " доллар = " << rubles << " руб.\n";
    }
}

void task5_11() {
    cout << "5.11. Таблица зависимости плотности от высоты:\n";
    const double p0 = 1.29;
    const double z = 1.25e-4;
    for (int height = 0; height <= 1000; height += 100) {
        double density = p0 * exp(-z * height);
        cout << "Высота " << height << " м: " << density << " кг/м^3\n";
    }
}

void task5_12() {
    cout << "5.12. Таблица умножения на 7:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 7 = " << i * 7 << "\n";
    }
}

void task5_13() {
    cout << "5.13. Таблица умножения на 7:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 7 = " << i * 7 << "\n";
    }
}

void task5_14() {
    cout << "5.14. Таблица квадратов чисел от 1 до 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << i << " = " << i * i << "\n";
    }
}

void task5_15() {
    cout << "5.15. Таблица факториалов чисел от 1 до 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << "\n";
    }
}

int main() {
    task5_6();
    task5_7();
    task5_8();
    task5_9();
    task5_10();
    task5_11();
    task5_12();
    task5_13();
    task5_14();
    task5_15();

    return 0;
}
