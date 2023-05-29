#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c - min(min(a, b), c);
    cout << "Sum: " << sum << endl;
    return 0;
}
