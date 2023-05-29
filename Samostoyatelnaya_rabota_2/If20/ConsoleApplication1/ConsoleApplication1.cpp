#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float dist_b = abs(b - a);
    float dist_c = abs(c - a);
    if (dist_b < dist_c) {
        cout << "b is closer: " << dist_b << endl;
    }
    else {
        cout << "c is closer: " << dist_c << endl;
    }
    return 0;
}
