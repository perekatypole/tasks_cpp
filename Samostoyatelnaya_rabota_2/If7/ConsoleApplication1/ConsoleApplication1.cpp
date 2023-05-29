#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b) cout << "1" << endl;
    else if (b < a) cout << "2" << endl;
    else cout << "Числа равны" << endl;
    return 0;
}
