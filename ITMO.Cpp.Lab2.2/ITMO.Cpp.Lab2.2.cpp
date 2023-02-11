#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string snils;
    int sum = 0;
    cin >> snils;
    string control = to_string(snils.at(9)- 48) + to_string(snils.at(10)-48);

    for (int i = 0; i < 9; ++i)
    {
        sum += (snils[i] - 48) * (9 - i);
    }

    if (sum < 100)
    {
        if (stoi(control) == sum)
        {
            cout << "Valid";
        }
        else
        {
            cout << "Not valid";
        }
    }
    else if (sum == 100 || sum == 101)
    {
        if (stoi(control) == 00)
        {
            cout << "Valid";
        }
        else
        {
            cout << "Not valid";
        }
    }
    else if (sum > 101)
    {
    
        if (sum % 101 < 100)
        {
            if (sum % 101 == stoi(control))
            {
                cout << "Valid";
            }
            else
            {
                cout << "Not Valid";
            }
        }
        else if (sum % 101 == 100)
        {
            if (stoi(control) == 00)
            {
                cout << "Valid";
            }
            else
            {
                cout << "Not Valid";
            }
        }
    }
}
