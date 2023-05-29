#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    bool isInFourthQuadrant = (x > 0) && (y < 0);
    isInFourthQuadrant == 1 ? cout << "True" : cout << "False";
    return 0;
}
