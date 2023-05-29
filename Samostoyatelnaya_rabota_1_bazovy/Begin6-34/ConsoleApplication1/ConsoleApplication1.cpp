#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Begin6
    double a, b, c;
    cout << "Введите длины ребер прямоугольного параллелепипеда (a, b, c): ";
    cin >> a >> b >> c;

    double volume = a * b * c;
    double surfaceArea = 2 * (a * b + b * c + a * c);

    cout << "Объем параллелепипеда: " << volume << endl;
    cout << "Площадь поверхности параллелепипеда: " << surfaceArea << endl;

    // Begin7
    double radius;
    cout << "Введите радиус окружности: ";
    cin >> radius;

    double circumference = 2 * M_PI * radius;
    double area = M_PI * pow(radius, 2);

    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << area << endl;

    // Begin8
    double num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    double average = (num1 + num2) / 2;

    cout << "Среднее арифметическое: " << average << endl;

    // Begin9
    cout << "Введите два неотрицательных числа: ";
    cin >> num1 >> num2;

    double geometricMean = sqrt(num1 * num2);

    cout << "Среднее геометрическое: " << geometricMean << endl;

    // Begin10
    cout << "Введите два ненулевых числа: ";
    cin >> num1 >> num2;

    double sumOfSquares = pow(num1, 2) + pow(num2, 2);
    double differenceOfSquares = pow(num1, 2) - pow(num2, 2);
    double productOfSquares = pow(num1, 2) * pow(num2, 2);
    double quotientOfSquares = pow(num1, 2) / pow(num2, 2);

    cout << "Сумма квадратов: " << sumOfSquares << endl;
    cout << "Разность квадратов: " << differenceOfSquares << endl;
    cout << "Произведение квадратов: " << productOfSquares << endl;
    cout << "Частное квадратов: " << quotientOfSquares << endl;

    // Begin11
    cout << "Введите два ненулевых числа: ";
    cin >> num1 >> num2;

    double sumOfAbsoluteValues = abs(num1) + abs(num2);
    double differenceOfAbsoluteValues = abs(num1) - abs(num2);
    double productOfAbsoluteValues = abs(num1) * abs(num2);
    double quotientOfAbsoluteValues = abs(num1) / abs(num2);

    cout << "Сумма модулей: " << sumOfAbsoluteValues << endl;
    cout << "Разность модулей: " << differenceOfAbsoluteValues << endl;
    cout << "Произведение модулей: " << productOfAbsoluteValues << endl;
    cout << "Частное модулей: " << quotientOfAbsoluteValues << endl;

    // Begin12
    cout << "Введите катеты прямоугольного треугольника (a, b): ";
    cin >> num1 >> num2;

    double hypotenuse = sqrt(pow(num1, 2) + pow(num2, 2));
    double perimeter = num1 + num2 + hypotenuse;

    cout << "Гипотенуза: " << hypotenuse << endl;
    cout << "Периметр: " << perimeter << endl;

    // Begin13
    double R1, R2;
    cout << "Введите радиусы двух кругов (R1 > R2): ";
    cin >> R1 >> R2;

    double S1 = M_PI * pow(R1, 2);
    double S2 = M_PI * pow(R2, 2);
    double S3 = S1 - S2;

    cout << "Площадь первого круга: " << S1 << endl;
    cout << "Площадь второго круга: " << S2 << endl;
    cout << "Площадь кольца: " << S3 << endl;

    // Begin14
    double L;
    cout << "Введите длину окружности: ";
    cin >> L;

    double R = L / (2 * M_PI);
    double circleArea = M_PI * pow(R, 2);

    cout << "Радиус: " << R << endl;
    cout << "Площадь круга: " << circleArea << endl;

    // Begin15
    double circleArea2;
    cout << "Введите площадь круга: ";
    cin >> circleArea2;

    double diameter = sqrt((4 * circleArea2) / M_PI);
    double circumference2 = 2 * M_PI * (diameter / 2);

    cout << "Диаметр: " << diameter << endl;
    cout << "Длина окружности: " << circumference2 << endl;

    // Begin16
    double x1, x2;
    cout << "Введите координаты двух точек на числовой оси (x1, x2): ";
    cin >> x1 >> x2;

    double distance = abs(x2 - x1);

    cout << "Расстояние между точками: " << distance << endl;

    // Begin17
    double pointA, pointB, pointC;
    cout << "Введите координаты трех точек на числовой оси (A, B, C): ";
    cin >> pointA >> pointB >> pointC;

    double distanceAC = abs(pointC - pointA);
    double distanceBC = abs(pointC - pointB);
    double sumOfDistances = distanceAC + distanceBC;

    cout << "Расстояние AC: " << distanceAC << endl;
    cout << "Расстояние BC: " << distanceBC << endl;
    cout << "Сумма расстояний AC и BC: " << sumOfDistances << endl;

    // Begin18
    cout << "Введите координаты трех точек на числовой оси (A, B, C): ";
    cin >> pointA >> pointB >> pointC;

    double productACBC = abs(pointC - pointA) * abs(pointC - pointB);

    cout << "Произведение расстояний AC и BC: " << productACBC << endl;

    // Begin19
    double x1, y1, x2, y2;
    cout << "Введите координаты двух противоположных вершин прямоугольника (x1, y1), (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    double side1 = abs(x2 - x1);
    double side2 = abs(y2 - y1);
    double perimeterRectangle = 2 * (side1 + side2);
    double areaRectangle = side1 * side2;

    cout << "Периметр прямоугольника: " << perimeterRectangle << endl;
    cout << "Площадь прямоугольника: " << areaRectangle << endl;

    // Begin20
    double x1, y1, x2, y2;
    cout << "Введите координаты двух точек на плоскости (x1, y1), (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    double distancePlane = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Расстояние между точками на плоскости: " << distancePlane << endl;

    // Begin21
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты трех точек на плоскости (x1, y1), (x2, y2), (x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double distanceAtoB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double distanceAtoC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double distanceBtoC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    double perimeterTriangle = distanceAtoB + distanceAtoC + distanceBtoC;
    double semiperimeter = perimeterTriangle / 2;
    double areaTriangle = sqrt(semiperimeter * (semiperimeter - distanceAtoB) * (semiperimeter - distanceAtoC) * (semiperimeter - distanceBtoC));

    cout << "Периметр треугольника: " << perimeterTriangle << endl;
    cout << "Площадь треугольника: " << areaTriangle << endl;

    // Begin22
    int A, B;
    cout << "Введите значения переменных A и B: ";
    cin >> A >> B;

    int temp = A;
    A = B;
    B = temp;

    cout << "Новое значение A: " << A << endl;
    cout << "Новое значение B: " << B << endl;

    // Begin23
    int A, B, C;
    cout << "Введите значения переменных A, B и C: ";
    cin >> A >> B >> C;

    int temp1 = A;
    int temp2 = B;
    A = C;
    B = temp1;
    C = temp2;

    cout << "Новое значение A: " << A << endl;
    cout << "Новое значение B: " << B << endl;
    cout << "Новое значение C: " << C << endl;

    // Begin24
    int A, B, C;
    cout << "Введите значения переменных A, B и C: ";
    cin >> A >> B >> C;

    int temp = A;
    A = C;
    C = B;
    B = temp;

    cout << "Новое значение A: " << A << endl;
    cout << "Новое значение B: " << B << endl;
    cout << "Новое значение C: " << C << endl;

   