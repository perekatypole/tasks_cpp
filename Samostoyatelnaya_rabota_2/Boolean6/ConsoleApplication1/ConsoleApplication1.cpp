#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool result = (a < b) && (b < c);
    result == 1 ? cout << "True" : cout << "False";
    return 0;
}