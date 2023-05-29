#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) { 
        cout << "1" << endl;
    }
    else if (x < 0 && y > 0) { 
        cout << "2" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "3" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "4" << endl;
    }
    else { 
        cout << "Точка лежит на координатной оси" << endl;
    }

    return 0;
}
