#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Integer15
    int number1;
    cout << "Введите трехзначное число: ";
    cin >> number1;
    int swappedNumber1 = (number1 % 10) * 100 + ((number1 / 10) % 10) * 10 + (number1 / 100);
    cout << "Число после перестановки цифр сотен и десятков: " << swappedNumber1 << endl;

    // Integer16
    int number2;
    cout << "Введите трехзначное число: ";
    cin >> number2;
    int swappedNumber2 = (number2 / 100) * 100 + (number2 % 10) * 10 + ((number2 / 10) % 10);
    cout << "Число после перестановки цифр десятков и единиц: " << swappedNumber2 << endl;

    // Integer17
    int number3;
    cout << "Введите число больше 999: ";
    cin >> number3;
    int hundredsDigit = (number3 / 100) % 10;
    cout << "Цифра в разряде сотен: " << hundredsDigit << endl;

    // Integer18
    int number4;
    cout << "Введите число больше 999: ";
    cin >> number4;
    int thousandsDigit = (number4 / 1000) % 10;
    cout << "Цифра в разряде тысяч: " << thousandsDigit << endl;

    // Integer19
    int N1;
    cout << "Введите количество секунд: ";
    cin >> N1;
    int minutes = N1 / 60;
    cout << "Количество полных минут: " << minutes << endl;

    // Integer20
    int N2;
    cout << "Введите количество секунд: ";
    cin >> N2;
    int hours = N2 / 3600;
    cout << "Количество полных часов: " << hours << endl;

    // Integer21
    int N3;
    cout << "Введите количество секунд: ";
    cin >> N3;
    int secondsLastMinute = N3 % 60;
    cout << "Количество секунд с начала последней минуты: " << secondsLastMinute << endl;

    // Integer22
    int N4;
    cout << "Введите количество секунд: ";
    cin >> N4;
    int secondsLastHour = N4 % 3600;
    cout << "Количество секунд с начала последнего часа: " << secondsLastHour << endl;

    // Integer23
    int N5;
    cout << "Введите количество секунд: ";
    cin >> N5;
    int minutesLastHour = (N5 % 3600) / 60;
    cout << "Количество полных минут с начала последнего часа: " << minutesLastHour << endl;

    // Integer24
    int K1;
    cout << "Введите число K (1-365): ";
    cin >> K1;
    int dayOfWeek = (K1 + 0) % 7;
    cout << "Номер дня недели для " << K1 << "-го дня года: " << dayOfWeek << endl;

    // Integer25
    int K2;
    cout << "Введите число K (1-365): ";
    cin >> K2;
    int dayOfWeek2 = (K2 + 2) % 7;
    cout << "Номер дня недели для " << K2 << "-го дня года: " << dayOfWeek2 << endl;

    // Integer26
    int K3;
    cout << "Введите число K (1-365): ";
    cin >> K3;
    int dayOfWeek3 = (K3 + 1) % 7;
    cout << "Номер дня недели для " << K3 << "-го дня года: " << dayOfWeek3 << endl;

    // Integer27
    int K4;
    cout << "Введите число K (1-365): ";
    cin >> K4;
    int dayOfWeek4 = (K4 + 5) % 7;
    cout << "Номер дня недели для " << K4 << "-го дня года: " << dayOfWeek4 << endl;

    // Integer28
    int K5, N;
    cout << "Введите число K (1-365): ";
    cin >> K5;
    cout << "Введите номер дня недели 1 января (1-7): ";
    cin >> N;
    int dayOfWeek5 = (K5 + (N - 1)) % 7;
    cout << "Номер дня недели для " << K5 << "-го дня года: " << dayOfWeek5 << endl;

    // Integer29
    int A, B, C;
    cout << "Введите целые положительные числа A, B и C: ";
    cin >> A >> B >> C;
    int squares = (A / C) * (B / C);
    int unusedArea = A * B - squares * C * C;
    cout << "Количество квадратов на прямоугольнике: " << squares << endl;
    cout << "Площадь незанятой части прямоугольника: " << unusedArea << endl;

    // Integer30
    int year;
    cout << "Введите номер года: ";
    cin >> year;
    int century = (year - 1) / 100 + 1;
    cout << "Соответствующий номер столетия: " << century << endl;

    return 0;
}
