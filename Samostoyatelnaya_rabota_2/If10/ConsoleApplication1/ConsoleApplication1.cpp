#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a != b) {
        a += b;
        b += a;
    }
    else {
        a = 0;
        b = 0;
    }
    cout << "a: " << a << "\tb: " << b << endl;
    return 0;
}
