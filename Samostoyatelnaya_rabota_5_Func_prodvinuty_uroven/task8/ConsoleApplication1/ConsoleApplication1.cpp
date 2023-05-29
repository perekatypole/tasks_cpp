#include <iostream>

int calculateDoubleFactorial(int n) {
    int result = 1;

    for (int i = n; i >= 1; i -= 2) {
        result *= i;
    }

    return result;
}

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    int doubleFactorial = calculateDoubleFactorial(n);
    std::cout << "Двойной факториал числа: " << doubleFactorial << std::endl;

    return 0;
}
