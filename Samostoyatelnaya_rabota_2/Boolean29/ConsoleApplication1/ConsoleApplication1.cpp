#include <iostream>
using namespace std;

int main() {
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    bool insideRectangle = (x >= x1 && x <= x2) && (y >= y2 && y <= y1);
    insideRectangle ==1?cout<<"True":cout<<"False";
    return 0;
}
