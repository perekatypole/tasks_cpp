#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

double calculateAngle(double vector1[], double vector2[], int size) {
    double scalarProduct = 0.0;
    double magnitude1 = 0.0;
    double magnitude2 = 0.0;

    for (int i = 0; i < size; i++) {
        scalarProduct += vector1[i] * vector2[i];
        magnitude1 += std::pow(vector1[i], 2);
        magnitude2 += std::pow(vector2[i], 2);
    }

    magnitude1 = std::sqrt(magnitude1);
    magnitude2 = std::sqrt(magnitude2);

    double cosine = scalarProduct / (magnitude1 * magnitude2);
    double angle = std::acos(cosine) * 180.0 / M_PI;

    return angle;
}

int main() {
    int size;
    double vector1[MAX_SIZE];
    double vector2[MAX_SIZE];

    std::cout << "Введите размер векторов: ";
    std::cin >> size;

    std::cout << "Введите элементы первого вектора: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Введите элементы второго вектора: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector2[i];
    }

    double angle = calculateAngle(vector1, vector2, size);
    std::cout << "Угол между векторами: " << angle << " градусов" << std::endl;

    return 0;
}
