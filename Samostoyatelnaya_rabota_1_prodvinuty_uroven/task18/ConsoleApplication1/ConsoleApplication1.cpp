#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double electronMass = 9.10938356e-31; // масса электрона в кг
    double speedOfLight = 299792458; // скорость света в м/с

    double velocity;
    cout << "Введите скорость электрона (в м/с): ";
    cin >> velocity;

    // Релятивистская кинетическая энергия
    double relativisticEnergy = (1 / sqrt(1 - pow((velocity / speedOfLight), 2)) - 1) * electronMass * pow(speedOfLight, 2);

    // Нерелятивистская кинетическая энергия
    double nonRelativisticEnergy = 0.5 * electronMass * pow(velocity, 2);

    cout << "Релятивистская кинетическая энергия: " << relativisticEnergy << " Дж" << endl;
    cout << "Нерелятивистская кинетическая энергия: " << nonRelativisticEnergy << " Дж" << endl;

    return 0;
}
