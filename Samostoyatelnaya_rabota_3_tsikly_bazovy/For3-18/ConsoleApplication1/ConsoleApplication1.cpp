#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    float price;

    // For3
    cout << "For3. Введите два целых числа A и B (A < B): ";
    cin >> A >> B;
    cout << "Числа между " << A << " и " << B << ": ";
    int count = 0;
    for (int i = A + 1; i < B; i++) {
        cout << i << " ";
        count++;
    }
    cout << "\nКоличество чисел: " << count << endl;

    // For4
    cout << "\nFor4. Введите цену 1 кг конфет: ";
    cin >> price;
    cout << "Стоимость 1, 2, ..., 10 кг конфет:\n";
    for (int i = 1; i <= 10; i++) {
        cout << "Вес: " << i << " кг, Стоимость: " << price * i << endl;
    }

    // For5
    cout << "\nFor5. Введите цену 1 кг конфет: ";
    cin >> price;
    cout << "Стоимость 0.1, 0.2, ..., 1 кг конфет:\n";
    for (float i = 0.1; i <= 1; i += 0.1) {
        cout << "Вес: " << i << " кг, Стоимость: " << price * i << endl;
    }

    // For6
    cout << "\nFor6. Введите цену 1 кг конфет: ";
    cin >> price;
    cout << "Стоимость 1.2, 1.4, ..., 2 кг конфет:\n";
    for (float i = 1.2; i <= 2; i += 0.2) {
        cout << "Вес: " << i << " кг, Стоимость: " << price * i << endl;
    }

    // For7
    cout << "\nFor7. Введите два целых числа A и B (A < B): ";
    cin >> A >> B;
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += i;
    }
    cout << "Сумма всех чисел от " << A << " до " << B << ": " << sum << endl;

    // For8
    cout << "\nFor8. Введите два целых числа A и B (A < B): ";
    cin >> A >> B;
    int product = 1;
    for (int i = A; i <= B; i++) {
        product *= i;
    }
    cout << "Произведение всех чисел от " << A << " до " << B << ": " << product << endl;

    // For9
    cout << "\nFor9. Введите два целых числа A и B (A < B): ";
    cin >> A >> B;
    int sumOfSquares = 0;
    for (int i = A; i <= B; i++) {
        sumOfSquares += i * i;
    }
    cout << "Сумма квадратов всех чисел от " << A << " до " << B << ": " << sumOfSquares << endl;

    // For10
    cout << "\nFor10. Введите целое число N (> 0): ";
    int N;
    cin >> N;
    float sumFraction = 0;
    for (int i = 1; i <= N; i++) {
        sumFraction += 1.0 / i;
    }
    cout << "Сумма 1 + 1/2 + 1/3 + ... + 1/N: " << sumFraction << endl;

    // For11
    cout << "\nFor11. Введите целое число N (> 0): ";
    cin >> N;
    int sumSquares = 0;
    for (int i = 0; i <= N; i++) {
        sumSquares += (N + i) * (N + i);
    }
    cout << "Сумма N^2 + (N+1)^2 + (N+2)^2 + ... + (2*N)^2: " << sumSquares << endl;

    // For12
    cout << "\nFor12. Введите целое число N (> 0): ";
    cin >> N;
    float productSequence = 1.1;
    for (int i = 2; i <= N; i++) {
        productSequence *= (1.0 + 0.1 * i);
    }
    cout << "Произведение 1.1 * 1.2 * 1.3 * ... * N: " << productSequence << endl;

    // For13
    cout << "\nFor13. Введите целое число N (> 0): ";
    cin >> N;
    float value = 1.1;
    float sumTerms = value;
    for (int i = 2; i <= N; i++) {
        value *= -1.0;
        value += 0.1;
        sumTerms += value;
    }
    cout << "Значение выражения 1.1 - 1.2 + 1.3 - ...: " << sumTerms << endl;

    // For14
    cout << "\nFor14. Введите целое число N (> 0): ";
    cin >> N;
    int sumOdd = 1;
    cout << "Квадраты чисел от 1 до " << N << ":\n";
    for (int i = 2; i <= N; i += 2) {
        sumOdd += i;
        cout << "Текущая сумма: " << sumOdd << endl;
    }

    // For15
    cout << "\nFor15. Введите вещественное число A: ";
    float numA;
    cin >> numA;
    cout << "Введите целое число N (> 0): ";
    cin >> N;
    float result = 1;
    for (int i = 1; i <= N; i++) {
        result *= numA;
    }
    cout << "Результат A^N: " << result << endl;

    // For16
    cout << "\nFor16. Введите вещественное число A: ";
    cin >> numA;
    cout << "Введите целое число N (> 0): ";
    cin >> N;
    float power = 1;
    cout << "Целые степени числа " << numA << " от 1 до " << N << ":\n";
    for (int i = 1; i <= N; i++) {
        power *= numA;
        cout << power << endl;
    }

    // For17
    cout << "\nFor17. Введите вещественное число A: ";
    cin >> numA;
    cout << "Введите целое число N (> 0): ";
    cin >> N;
    float sumPowers = 1;
    float term = 1;
    cout << "Сумма 1 + A + A^2 + ... + A^N: ";
    for (int i = 1; i <= N; i++) {
        term *= numA;
        sumPowers += term;
    }
    cout << sumPowers << endl;

    // For18
    cout << "\nFor18. Введите вещественное число A: ";
    cin >> numA;
    cout << "Введите целое число N (> 0): ";
    cin >> N;
    float sumExpression = 1;
    float termExp = 1;
    cout << "Значение выражения 1 - A + A^2 - ... + (-1)^N * A^N: ";
    for (int i = 1; i <= N; i++) {
        termExp *= -1 * numA;
        sumExpression += termExp;
    }
    cout << sumExpression << endl;

    return 0;
}
