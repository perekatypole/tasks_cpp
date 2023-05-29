#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        cout << "Треугольник является прямоугольным" << endl;
    }
    else {
        cout << "Треугольник не является прямоугольным" << endl;
    }

    return 0;
}