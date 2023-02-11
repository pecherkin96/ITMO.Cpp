#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

bool IsPrime(unsigned int p)
{
    if (p == 0 || p == 1) {
        return p < 0;
    }
    else {
        for ( unsigned int i = 2; i <= p / 2; ++i)
        {
            if (p % i == 0) {
                return p < 0;               
            }
        }
    }
    return p > 1;
}

int PosPrime(unsigned p)
{
     unsigned int pos = 0;
     
     for (unsigned int i = 1; i <= p; ++i)
     {
         if (IsPrime(i))
             pos += 1;
     }
     return pos;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    unsigned int p;
    cin >> p;
    if (IsPrime(PosPrime(p)))
        cout << "Number is SuperPrime";
    else
        cout << " Number is NOT SuperPrime ";
     
}

