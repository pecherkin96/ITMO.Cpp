#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

double cubeRoot(double n)
{
    return pow(n, 1.0 / 3);
}

double cubeRootIterable(double n)
{
    double p = n;
    double x = 0;

    while (abs(x - p) > 0.001) {
        x = p;
        p = (n / (x * x) + 2 * x) / 3;
    }
    return p;

}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double k;
    cin >> k;
    cout << cubeRoot(k) << endl;
    cout << cubeRootIterable(k);  

}