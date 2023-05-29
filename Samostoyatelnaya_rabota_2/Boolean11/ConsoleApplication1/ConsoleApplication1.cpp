#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool res = (A % 2 == B % 2);
    res == 1 ? cout << "True" : cout << "False";
    return 0;
}