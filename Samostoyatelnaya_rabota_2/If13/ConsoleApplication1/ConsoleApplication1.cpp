#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max_num = max(max(a, b), c);
    int min_num = min(min(a, b), c);
    int mid_num = a + b + c - max_num - min_num;
    cout << "middle: " << mid_num << endl;
    return 0;
}
