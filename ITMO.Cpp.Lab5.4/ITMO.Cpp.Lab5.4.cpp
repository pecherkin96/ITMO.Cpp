#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <cstring>
#include <typeinfo>
using namespace std;

bool double_is_int(double trouble)
{
    double absolute = abs(trouble);
    return absolute == floor(absolute);
}



int main(int argc,  char* argv[])
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   

    if (argc == 4)
    {

        if (double_is_int(stod(argv[2])) && double_is_int(stod(argv[3])))
        { 
            int h = atoi(argv[2]);
            int b = atoi(argv[3]);
            char m[] = "-m";
            char a[] = "-a";

            if (strncmp(argv[1], m, 2) == 0)
            {
                int sum = h + b;

                cout << sum << endl;
            }

            else if (strncmp(argv[1], a, 2) == 0)
            {
                int mul = h * b;

                cout << mul << endl;

            }

            else
                cout << "Укажите вторым парметром -а или -m";
        }

        else
        {
            cout << "Работаю только с целыми числами";
        }
    }
    else
    {
        cout << "Неверное колличество параметров программы";
    }
    
}
