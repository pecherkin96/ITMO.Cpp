#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

bool Input(int& a, int& b)
{
    int x, y;

    cout << "Введите 2 числа от 0 до 9: ";
    cin >> x >> y;
    if (((x < 0) || (x > 9)) || ((y < 0) || (y > 9)))
    {
        return false;
    }

    a = x;
    b = y;

    return true;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b;
    if (Input(a, b) == false)
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;

    return 0;
}
