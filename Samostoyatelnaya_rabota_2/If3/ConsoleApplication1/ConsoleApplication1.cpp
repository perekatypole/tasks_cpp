#include <iostream>

int main() {
    int num;
    std::cin >> num;

    if (num > 0) {
        num += 1;
    }
    else if (num < 0) {
        num -= 2;
    }
    else {
        num = 10;
    }

    std::cout << num << std::endl;
    return 0;
}
