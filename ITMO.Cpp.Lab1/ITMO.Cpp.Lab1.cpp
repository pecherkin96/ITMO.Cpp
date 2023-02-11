#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
using namespace std;



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    cout << "Ведите координаты пятиугольника:" << endl << "x1: ";

    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    cout << "x3: ";
    cin >> x3;
    cout << "y3: ";
    cin >> y3;

    cout << "x4: ";
    cin >> x4;
    cout << "y4: ";
    cin >> y4;

    cout << "x5: ";
    cin >> x5;
    cout << "y5: ";
    cin >> y5;

    int s;
    int i;
    i = abs((x1 * y2) + (x2 * y3) + (x3 * y4) + (x4 * y5) + (x5 * y1) - (y1 * x2) - (y2 * x3) - (y3 * x4) - (y4 * x5) - (y5 * x1));
    s = i / 2;
    
    cout << "Площадь пятиугольника равна: " << s;

}
