#include <iostream>

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    int count = 0;
    if (num1 > 0) {
        count++;
    }
    if (num2 > 0) {
        count++;
    }
    if (num3 > 0) {
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
