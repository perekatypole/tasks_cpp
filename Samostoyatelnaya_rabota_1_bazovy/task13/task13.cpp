#include <iostream>
#include <math.h>

using namespace std;

double first_func(double x)
{
    cout << "Задача №13(а) :\n";
    return 7 * pow(x, 2) - 3 * x + 6;
}

double second_func(double x)
{
    cout << "Задача №13(б) :\n";
    return 12 * pow(x, 2) + 7 * x - 16;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double num;
    cin >> num;
    cout << first_func(num) << endl;
    cout << second_func(num);
}


