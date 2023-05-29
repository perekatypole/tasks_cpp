#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || a == c || b == c) {
        cout << "Треугольник является равнобедренным" << endl;
    }
    else {
        cout << "Треугольник не является равнобедренным" << endl;
    }

    return 0;
}
