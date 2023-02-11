#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    vector<int> nominal = { 1, 2, 5, 10 };
    int sum, result;
    cout << "Введите сумму для размена: ";
    cin >> sum;

    for (int i = 3; i >= 0; --i)
    {
        result = sum / nominal[i];
        sum %= nominal[i];
        cout << "Номинал монеты: " << nominal[i] << " " << "Выдать штук: " << result << endl;
    }

}