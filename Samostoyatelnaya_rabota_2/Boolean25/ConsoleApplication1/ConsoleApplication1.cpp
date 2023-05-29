#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    bool isInSecondQuadrant = (x < 0) && (y > 0);
    isInSecondQuadrant == 1 ? cout << "True" : cout << "False";
    return 0;
}
