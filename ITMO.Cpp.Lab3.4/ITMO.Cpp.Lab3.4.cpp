#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int Sum(int n)
{
    if (n == 1) return 5;
    else return(n * 5 + Sum(n - 1));
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n;
    cin >> n;
    cout << Sum(n);
}