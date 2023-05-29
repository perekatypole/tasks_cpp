#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool isEquilateralTriangle = (a == b) && (b == c);
    isEquilateralTriangle==1?cout<<"True":cout<<"False";
    return 0;
}
