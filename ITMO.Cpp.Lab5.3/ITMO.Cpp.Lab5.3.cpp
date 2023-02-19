#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;



int transpositionSearch(int* array, int size, int element)
{
    int answerIndex;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            answerIndex = i;

            if (answerIndex == 0)
            {
                break;
            }

            else
            {
                swap(array[i], array[i - 1]);
            }
        }
    }
    return answerIndex;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr[] = { 6,9,76,55,2,7,18 };


    for (int i = 0; i < 7; i++)
    {
        cout << "Индекс числа 2: " << transpositionSearch(arr, 7, 2) << endl;
    }
}