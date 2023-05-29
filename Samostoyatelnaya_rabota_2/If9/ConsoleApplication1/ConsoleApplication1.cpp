#include <iostream>
using namespace std;

int main() {
    double a, b, temp;
    cin >> a >> b;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    cout << "a: " << a << "\tb: " << b << endl;
    return 0;
}
