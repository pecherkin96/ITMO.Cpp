#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

double areaTriagle(double n)
{
    double s;

    s = (sqrt(3) / 4) * pow(n, 2);
    return s;
}
double areaTriagle(double a, double b, double c)
{
    
    double p, s;

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    return s;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char menu;
    cout << "Выберете тип треугольника: 1- равносторонний, 2 - разносторонний: ";
    cin >> menu;

    switch (menu)
    {
    case '1':
        double n;
        cout << "\nВведите сторону равностороннего треугольника: ";
        cin >> n;
        cout << "\n Площадь треугольника равна: " << areaTriagle(n);
        break;
    case '2':
        double n1, n2, n3;
        cout << "\nВведите размеры трех сторон разностороннего треугольника: ";
        cin >> n1 >> n2 >> n3;
        cout << "\n Площадь треугольника равна: " << areaTriagle(n1, n2, n3);
        break;
    default:
        cout << "\nВы ввели неверное значение!";
    }
    return 0;

}