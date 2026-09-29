// Lab_03_1.cpp
// Королевич Денис
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 5 * exp(3 * x);

    // Спосіб 1: розгалуження в скороченій формі
    if (x < -1)
        B = sqrt(2) * x * x * x - 7;
    if (x >= -1 && x < 3)
        B = 2 * log10(1 - x / 4);
    if (x >= 3)
        B = cos(abs(x)) + 3;

    y = A - B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x < -1)
        B = sqrt(2) * x * x * x - 7;
    else
        if (x >= 3)
            B = cos(fabs(x)) + 3;
        else
            B = 2 * log10(1 - x / 4);

    y = A - B;

    cout << "2) y = " << y << endl;

    cin.get();
    cin.get();
    return 0;
}
