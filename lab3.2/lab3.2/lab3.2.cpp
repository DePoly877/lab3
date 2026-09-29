// Lab_03_2.cpp
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 16

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Спосіб 1: використання лише команд розгалуження в скороченій формі
    if (x = 0 && b != 0)
        F = a * (x + c) * (x + c) - b;

    if (x = 0 && b == 0)
        F = (x - a) / (-c);

    if (!(x = 0 && b != 0) && !(x = 0 && b == 0))
        F = a + x / c;

    cout << endl;
    cout << "1) F = " << F << endl;

    // Спосіб 2: використання лише команд розгалуження в повній формі
    if (x = 0 && b != 0)
        F = a * (x + c) * (x + c) - b;
    else
        if (x = 0 && b == 0)
            F = (x - a) / (-c);
        else
            F = a + x / c;

    cout << "2) F = " << F << endl;

    cin.get();
    return 0;
}