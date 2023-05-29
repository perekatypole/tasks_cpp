#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, fib = 0;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int n;

    std::cout << "Введите порядковый номер числа в последовательности Фибоначчи: ";
    std::cin >> n;

    int result = fibonacci(n);

    std::cout << "Число Фибоначчи с порядковым номером " << n << ": " << result << std::endl;

    return 0;
}
