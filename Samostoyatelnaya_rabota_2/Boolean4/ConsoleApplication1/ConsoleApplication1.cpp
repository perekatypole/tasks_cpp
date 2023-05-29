#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool result = (a > 2) && (b < 3);
    result == 1 ? cout << "True" : cout << "False";
    return 0;
}
