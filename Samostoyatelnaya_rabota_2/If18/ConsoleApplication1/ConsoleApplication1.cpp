#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << "Number 3 is different" << endl;
    }
    else if (a == c) {
        cout << "Number 2 is different" << endl;
    }
    else {
        cout << "Number 1 is different" << endl;
    }
    return 0;
}
