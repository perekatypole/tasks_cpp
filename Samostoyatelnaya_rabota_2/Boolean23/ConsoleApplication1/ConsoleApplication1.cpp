#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;

    bool isPalindrome = (a == d) && (b == c);
    isPalindrome == 1 ? cout << "True" : cout << "False";

    return 0;
}
