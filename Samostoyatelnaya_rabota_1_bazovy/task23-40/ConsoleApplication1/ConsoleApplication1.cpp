#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Задача 23
    double volume, mass;
    double density;

    cout << "Введите объем тела: ";
    cin >> volume;

    cout << "Введите массу тела: ";
    cin >> mass;

    density = mass / volume;
    cout << "Плотность материала: " << density << endl;

    // Задача 24
    int population;
    double area;
    double populationDensity;

    cout << "Введите количество жителей: ";
    cin >> population;

    cout << "Введите площадь территории: ";
    cin >> area;

    populationDensity = population / area;
    cout << "Плотность населения: " << populationDensity << endl;

    // Задача 25
    double a, b;
    double x;

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    if (a != 0) {
        x = -b / a;
        cout << "Решение уравнения ax + b = 0: x = " << x << endl;
    }
    else {
        cout << "Уравнение не является линейным." << endl;
    }

    // Задача 26
    double cathetus1, cathetus2;
    double hypotenuse;

    cout << "Введите значение первого катета: ";
    cin >> cathetus1;

    cout << "Введите значение второго катета: ";
    cin >> cathetus2;

    hypotenuse = sqrt(cathetus1 * cathetus1 + cathetus2 * cathetus2);
    cout << "Гипотенуза: " << hypotenuse << endl;

    // Задача 27
    double outerRadius, innerRadius;
    double ringArea;

    cout << "Введите значение внешнего радиуса: ";
    cin >> outerRadius;

    cout << "Введите значение внутреннего радиуса: ";
    cin >> innerRadius;

    ringArea = M_PI * (outerRadius * outerRadius - innerRadius * innerRadius);
    cout << "Площадь кольца: " << ringArea << endl;

    // Задача 28
    double perimeter;

    perimeter = cathetus1 + cathetus2 + hypotenuse;
    cout << "Периметр прямоугольного треугольника: " << perimeter << endl;

    // Задача 29
    double base1, base2, height;
    double trapezoidPerimeter;

    cout << "Введите значение первого основания: ";
    cin >> base1;

    cout << "Введите значение второго основания: ";
    cin >> base2;

    cout << "Введите значение высоты: ";
    cin >> height;

    trapezoidPerimeter = base1 + base2 + 2 * sqrt(pow((base2 - base1) / 2, 2) + height * height);
    cout << "Периметр равнобедренной трапеции: " << trapezoidPerimeter << endl;

    // Задача 32
    double num1, num2;
    double arithmeticMean, geometricMean;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    arithmeticMean = (fabs(num1) + fabs(num2)) / 2;
    geometricMean = sqrt(fabs(num1) * fabs(num2));
    cout << "Среднее арифметическое: " << arithmeticMean << endl;
    cout << "Среднее геометрическое: " << geometricMean << endl;

    // Задача 33
    double side1, side2;
    double diagonal, rectanglePerimeter;

    cout << "Введите длину первой стороны: ";
    cin >> side1;

    cout << "Введите длину второй стороны: ";
    cin >> side2;

    diagonal = sqrt(side1 * side1 + side2 * side2);
    rectanglePerimeter = 2 * (side1 + side2);
    cout << "Периметр прямоугольника: " << rectanglePerimeter << endl;
    cout << "Диагональ прямоугольника: " << diagonal << endl;

    // Задача 34
    double sum, difference, product, quotient;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
        cout << "Сумма: " << sum << endl;
        cout << "Разность: " << difference << endl;
        cout << "Произведение: " << product << endl;
        cout << "Частное: " << quotient << endl;
    }
    else {
        cout << "Деление на ноль невозможно." << endl;
    }

    // Задача 35
    double length, width, height;
    double volume, surfaceArea;

    cout << "Введите длину: ";
    cin >> length;

    cout << "Введите ширину: ";
    cin >> width;

    cout << "Введите высоту: ";
    cin >> height;

    volume = length * width * height;
    surfaceArea = 2 * (length * width + length * height + width * height);
    cout << "Объем параллелепипеда: " << volume << endl;
    cout << "Площадь поверхности параллелепипеда: " << surfaceArea << endl;

    // Задача 36
    double x1, y1, x2, y2;
    double distance;

    cout << "Введите координаты первой точки (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второй точки (x2, y2): ";
    cin >> x2 >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Расстояние между точками: " << distance << endl;

    // Задача 37
    double base1, base2, angle;
    double trapezoidArea;

    cout << "Введите значение первого основания: ";
    cin >> base1;

    cout << "Введите значение второго основания: ";
    cin >> base2;

    cout << "Введите значение угла при большем основании (в градусах): ";
    cin >> angle;

    trapezoidArea = (base1 + base2) * sin(angle * M_PI / 180) / 2;
    cout << "Площадь трапеции: " << trapezoidArea << endl;

    // Задача 38
    double x1, y1, x2, y2, x3, y3;
    double perimeter, area;

    cout << "Введите координаты первой вершины (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второй вершины (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Введите координаты третьей вершины (x3, y3): ";
    cin >> x3 >> y3;

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    perimeter = side1 + side2 + side3;
    double s = perimeter / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;

    // Задача 39
    int a, b;
    int temp;

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;

    // Задача 40
    int numA, numB, numC;
    int temp;

    cout << "Введите значение a: ";
    cin >> numA;

    cout << "Введите значение b: ";
    cin >> numB;

    cout << "Введите значение c: ";
    cin >> numC;

    temp = numB;
    numB = numC;
    numC = numA;
    numA = temp;

    cout << "a = " << numA << ", b = " << numB << ", c = " << numC << endl;

    return 0;
}
