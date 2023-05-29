#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool result = (a > 0) || (b < -2);
    result == 1 ? cout << "True" : cout << "False";
    return 0;
}