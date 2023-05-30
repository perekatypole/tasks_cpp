#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // 5.76
    int p;
    cout << "Введите натуральное число p для задачи 5.76: ";
    cin >> p;

    double sum76 = 0.0;
    double a;

    for (int i = 1; i <= p; i++) {
        cout << "Введите вещественное число a" << i << ": ";
        cin >> a;
        sum76 += a * a;
    }

    cout << "Сумма квадратов вещественных чисел: " << sum76 << endl;

    // 5.77
    double sum77 = 0.0;

    for (int i = 1; i <= 10; i++) {
        cout << "Введите число a" << i << ": ";
        cin >> a;
        sum77 += a;
    }

    double average77 = sum77 / 10;

    cout << "Среднее арифметическое чисел: " << average77 << endl;

    // 5.78
    cout << "Введите натуральное число p для задачи 5.78: ";
    cin >> p;

    double sum78 = 0.0;

    for (int i = 1; i <= p; i++) {
        cout << "Введите вещественное число a" << i << ": ";
        cin >> a;
        sum78 += a;
    }

    double average78 = sum78 / p;

    cout << "Среднее арифметическое вещественных чисел: " << average78 << endl;

    // 5.79
    double sum79 = 0.0;
    double grade;

    for (int i = 1; i <= 20; i++) {
        cout << "Введите оценку ученика " << i << ": ";
        cin >> grade;
        sum79 += grade;
    }

    double average79 = sum79 / 20;

    cout << "Средняя оценка: " << average79 << endl;

    // 5.80
    double sum80 = 0.0;

    for (int i = 1; i <= 10; i++) {
        cout << "Введите оценку по предмету " << i << ": ";
        cin >> grade;
        sum80 += grade;
    }

    double average80 = sum80 / 10;

    cout << "Средняя оценка: " << average80 << endl;

    // 5.81
    double sum81 = 0.0;

    for (int i = 1; i <= 20; i++) {
        cout << "Введите оценку по алгебре ученика " << i << ": ";
        cin >> grade;
        sum81 += grade;
    }

    double average81 = sum81 / 20;

    cout << "Средняя оценка: " << average81 << endl;

    // 5.82
    int count82;
    double mass, totalMass;

    cout << "Введите количество предметов: ";
    cin >> count82;

    totalMass = 0.0;

    for (int i = 1; i <= count82; i++) {
        cout << "Введите массу предмета " << i << ": ";
        cin >> mass;
        totalMass += mass;
    }

    double averageMass82 = totalMass / count82;

    cout << "Средняя масса: " << averageMass82 << endl;

    // 5.84
    double sum84a = 0.0, sum84b = 0.0;
    double gradeA, gradeB;

    for (int i = 1; i <= 4; i++) {
        cout << "Введите оценку ученика A по предмету " << i << ": ";
        cin >> gradeA;
        sum84a += gradeA;

        cout << "Введите оценку ученика B по предмету " << i << ": ";
        cin >> gradeB;
        sum84b += gradeB;
    }

    cout << "Сумма оценок ученика A: " << sum84a << endl;
    cout << "Сумма оценок ученика B: " << sum84b << endl;

    // 5.85
    double sum85a = 0.0, sum85b = 0.0;
    double scoreA, scoreB;

    for (int i = 1; i <= 5; i++) {
        cout << "Введите баллы спортсмена A в виде спорта " << i << ": ";
        cin >> scoreA;
        sum85a += scoreA;

        cout << "Введите баллы спортсмена B в виде спорта " << i << ": ";
        cin >> scoreB;
        sum85b += scoreB;
    }

    cout << "Сумма баллов спортсмена A: " << sum85a << endl;
    cout << "Сумма баллов спортсмена B: " << sum85b << endl;

    // 5.86
    double sumAgeClass1 = 0.0, sumAgeClass2 = 0.0;
    double age;

    for (int i = 1; i <= 20; i++) {
        cout << "Введите возраст ученика класса 1: ";
        cin >> age;
        sumAgeClass1 += age;

        cout << "Введите возраст ученика класса 2: ";
        cin >> age;
        sumAgeClass2 += age;
    }

    double averageAgeClass1 = sumAgeClass1 / 20;
    double averageAgeClass2 = sumAgeClass2 / 20;

    cout << "Средний возраст учеников класса 1: " << averageAgeClass1 << endl;
    cout << "Средний возраст учеников класса 2: " << averageAgeClass2 << endl;

    // 5.87
    double januaryPrecipitation, marchPrecipitation;
    double averageJanuaryPrecipitation, averageMarchPrecipitation;

    cout << "Введите количество осадков в январе: ";
    cin >> januaryPrecipitation;
    cout << "Введите количество осадков в марте: ";
    cin >> marchPrecipitation;

    averageJanuaryPrecipitation = januaryPrecipitation / 31;
    averageMarchPrecipitation = marchPrecipitation / 31;

    cout << "Среднедневное количество осадков в январе: " << averageJanuaryPrecipitation << endl;
    cout << "Среднедневное количество осадков в марте: " << averageMarchPrecipitation << endl;

    // 5.88
    double sumHeightClass1 = 0.0, sumHeightClass2 = 0.0;
    double height;

    for (int i = 1; i <= 20; i++) {
        cout << "Введите рост ученика класса 1: ";
        cin >> height;
        sumHeightClass1 += height;

        cout << "Введите рост ученика класса 2: ";
        cin >> height;
        sumHeightClass2 += height;
    }

    double averageHeightClass1 = sumHeightClass1 / 20;
    double averageHeightClass2 = sumHeightClass2 / 20;

    cout << "Средний рост учеников класса 1: " << averageHeightClass1 << endl;
    cout << "Средний рост учеников класса 2: " << averageHeightClass2 << endl;

    // 5.89
    double sumGradeClass1 = 0.0, sumGradeClass2 = 0.0;
    double gradeClass1, gradeClass2;

    for (int i = 1; i <= 20; i++) {
        cout << "Введите оценку ученика класса 1: ";
        cin >> gradeClass1;
        sumGradeClass1 += gradeClass1;

        cout << "Введите оценку ученика класса 2: ";
        cin >> gradeClass2;
        sumGradeClass2 += gradeClass2;
    }

    double averageGradeClass1 = sumGradeClass1 / 20;
    double averageGradeClass2 = sumGradeClass2 / 20;

    cout << "Средняя оценка в классе 1: " << averageGradeClass1 << endl;
    cout << "Средняя оценка в классе 2: " << averageGradeClass2 << endl;

    // 5.90
    int countDistricts = 10;
    double wheatArea, wheatYield, totalWheat = 0.0, averageYield;

    for (int i = 1; i <= countDistricts; i++) {
        cout << "Введите площадь, засеянную пшеницей в районе " << i << ": ";
        cin >> wheatArea;

        cout << "Введите среднюю урожайность пшеницы в районе " << i << ": ";
        cin >> wheatYield;

        totalWheat += wheatArea * wheatYield;
    }

    averageYield = totalWheat / countDistricts;

    cout << "Количество пшеницы, собранное в области: " << totalWheat << endl;
    cout << "Средняя урожайность по области: " << averageYield << endl;

    // 5.91
    int countDistricts91 = 12;
    double population, area, totalPopulation = 0.0, totalArea = 0.0, averageDensity;

    for (int i = 1; i <= countDistricts91; i++) {
        cout << "Введите количество жителей в районе " << i << ": ";
        cin >> population;
        totalPopulation += population;

        cout << "Введите площадь района " << i << ": ";
        cin >> area;
        totalArea += area;
    }

    averageDensity = totalPopulation / totalArea;

    cout << "Общее количество жителей в области: " << totalPopulation << endl;
    cout << "Средняя плотность населения по области: " << averageDensity << endl;

    return 0;
}
