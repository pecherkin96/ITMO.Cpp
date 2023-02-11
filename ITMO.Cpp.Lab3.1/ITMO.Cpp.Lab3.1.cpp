#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

bool checkSnils(string snils)
{
    int sum = 0;
    string control = to_string(snils.at(9) - 48) + to_string(snils.at(10) - 48);

    for (int i = 0; i < 9; ++i)
    {
        sum += (snils[i] - 48) * (9 - i);
    }

    if (sum < 100)
    {
        if (stoi(control) == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (sum == 100 || sum == 101)
    {
        if (stoi(control) == 00)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (sum > 101)
    {

        if (sum % 101 < 100)
        {
            if (sum % 101 == stoi(control))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (sum % 101 == 100)
        {
            if (stoi(control) == 00)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

string clearString(string userString) 
{
    int trash;

    for (int i = 0; i < userString.size(); i++) {
        if ((userString.find(" ") != string::npos)) {

            trash = userString.find(" ");

            userString.replace(trash, 1, "");
        }
        else if ((userString.find("-") != string::npos)) {

            trash = userString.find("-");

            userString.replace(trash, 1, "");
        }
    }
    return userString;
}

bool isNumeric(string const& str)
{
    for (int i = 0; i < str.length(); i++)
        if (int(str[i]) < 48 || int(str[i]) > 58) //48-58 это ASCII-коды цифр
        {
            return false;         
        }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string s;
    getline(cin, s);
    string cleared = clearString(s);

    if (isNumeric(cleared))
    {
        if (checkSnils(cleared))
        {
            cout << "True!";
        }
        else
        {
            cout << "False!";
        }
    }
    else
    {
        cout << "False!";
    }
}