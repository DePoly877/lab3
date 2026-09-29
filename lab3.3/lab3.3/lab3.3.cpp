// Lab3.3.cpp
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double k; // вхідний параметр
    double r1; // вхідний параметр
    double r2; // вхідний параметр
    double y; // результат обчислення 

    cout << "x = "; cin >> x;
    cout << "angle = "; cin >> k;
    cout << "r1 = "; cin >> r1;
    cout << "r2 = "; cin >> r2;
    if (x < -r1)
        y = tan(180 - k) * (x + r1) - r1;
    else
        if (x >= -r1 && x <= 0)
            y = -r1 + sqrt(r1 * r1 - x * x);
        else
            if (0 < x && x <= r2)
                y = r2 - sqrt(r2 * r2 - x * x);
            else
                if (r2 <= x && x <= 4)
                    y = -r1;
                else 
                    y = (r1 / 2.0) * (x - 6.0);

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}