#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double probabilityP, probabilityQ;
    cout << "Введите вероятность попадания торпеды в авианосец (p): ";
    cin >> probabilityP;
    cout << "Введите вероятность затопления демаскированной подводной лодки кораблями охранения (p1): ";
    cin >> probabilityQ;

    // Вычисление вероятности события А: авианосец будет затоплен, а подводные лодки уйдут из зоны действия кораблей охранения без потерь
    double probabilityA = (1 - probabilityP) * (1 - probabilityQ);

    cout << "Вероятность события A: " << probabilityA << endl;

    return 0;
}