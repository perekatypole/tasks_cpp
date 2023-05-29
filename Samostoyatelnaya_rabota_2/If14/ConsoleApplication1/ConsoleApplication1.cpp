#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max_num = max(max(a, b), c);
    int min_num = min(min(a, b), c);
    cout << "Min: " << min_num << endl;
    cout << "Max: " << max_num << endl;
    return 0;
}
