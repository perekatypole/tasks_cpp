#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool exists_triangle = (a + b > c) && (b + c > a) && (a + c > b);
    exists_triangle==1?cout<<"True":cout<<"False";

    return 0;
}
