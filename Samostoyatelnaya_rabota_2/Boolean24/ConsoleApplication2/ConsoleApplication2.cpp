#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    bool hasRealRoots = (discriminant >= 0) && (a != 0);
    hasRealRoots == 1 ? cout << "True" : cout << "False";

    return 0;
}
