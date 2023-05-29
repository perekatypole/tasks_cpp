#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if ((a <= b && b <= c) || (a >= b && b >= c)) {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else {
        a = -a;
        b = -b;
        c = -c;
    }
    cout << "New values: " << a << " " << b << " " << c << endl;
    return 0;
}
