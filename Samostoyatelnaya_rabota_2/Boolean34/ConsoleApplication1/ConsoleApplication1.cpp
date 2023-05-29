#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    bool is_white = ((x + y) % 2 == 0);
    is_white == 1 ? cout << "True" : cout << "False";

    return 0;
}
