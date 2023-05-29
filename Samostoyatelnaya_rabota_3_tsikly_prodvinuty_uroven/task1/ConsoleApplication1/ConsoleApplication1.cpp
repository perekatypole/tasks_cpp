#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double calculateCosine(double x, int n)
{
    double cos = 0.0;
    int sign = 1;

    for (int i = 0; i < n; i++)
    {
        cos += (sign * pow(x, 2 * i)) / factorial(2 * i);
        sign *= -1;
    }

    return cos;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double x;
    const int n=1000;

    cout << "Введите аргумент x: ";
    cin >> x;


    double cosine = calculateCosine(x, n);

    cout << "Значение косинуса: " << cosine << endl;

    return 0;
}
