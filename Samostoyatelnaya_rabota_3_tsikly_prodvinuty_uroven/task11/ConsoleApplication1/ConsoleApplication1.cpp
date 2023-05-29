#include <iostream>
#include <cmath>

const double GRAVITY = 9.8; // Ускорение свободного падения

double calculateFlightTime(double initialVelocity, double angle) {
    double time = 0.0;

    double verticalComponent = initialVelocity * sin(angle);
    time = (2 * verticalComponent) / GRAVITY;

    return time;
}

int main() {
    double initialVelocity, angle;

    std::cout << "Введите начальную скорость тела: ";
    std::cin >> initialVelocity;

    std::cout << "Введите угол (в градусах) относительно горизонта: ";
    std::cin >> angle;

    // Переводим угол из градусов в радианы
    angle = angle * M_PI / 180.0;

    double flightTime = calculateFlightTime(initialVelocity, angle);

    std::cout << "Время полета: " << flightTime << " секунд" << std::endl;

    return 0;
}
