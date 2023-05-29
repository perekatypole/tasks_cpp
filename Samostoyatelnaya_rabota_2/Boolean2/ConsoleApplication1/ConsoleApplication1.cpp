#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    bool result = a % 2 != 0;
    result == 1 ? cout << "True" : cout << "False";
    return 0;
}