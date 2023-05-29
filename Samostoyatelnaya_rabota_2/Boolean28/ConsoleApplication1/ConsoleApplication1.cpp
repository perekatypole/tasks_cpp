#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    bool inFirstOrThirdQuadrant = (x > 0 && y > 0) || (x < 0 && y < 0);
    inFirstOrThirdQuadrant==1?cout<<"True":cout<<"False";
    return 0;
}
