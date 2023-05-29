#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool result = (a % 2 != 0) != (b % 2 != 0);
    result == 1 ? cout << "True" : cout << "False";
    return 0;
}
