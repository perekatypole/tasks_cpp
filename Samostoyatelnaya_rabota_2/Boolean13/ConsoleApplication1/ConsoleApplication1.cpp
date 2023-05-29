#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    bool res = (A > 0 || B > 0 || C > 0);
    res == 1 ? cout << "True" : cout << "False";
    return 0;
}
