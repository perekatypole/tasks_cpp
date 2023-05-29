#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c) {
        cout << "Number 4 is different." << endl;
    }
    else if (a == b && b == d) {
        cout << "Number 3 is different." << endl;
    }
    else if (a == c && c == d) {
        cout << "Number 2 is different." << endl;
    }
    else {
        cout << "Number 1 is different." << endl;
    }
    return 0;
}
