#include <iostream>
#include <Windows.h>
#include <cmath>
#include <nlohmann/json.hpp> 
#include <fstream> 
using json = nlohmann::json;
using namespace std;

void recArrToFile(int* arr, int n)
{
    ofstream out("Array.txt", ios::app);

    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        out << arr[i] << " ";
    }

    out << endl;
    out.close();
}

int sortArr(int* arr, int n)
{
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            min = (arr[j] < arr[min]) ? j : min;
        }
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    return *arr;
}

int initalArr(int * nums, int n)
{

    for (int i = 0; i < n; i++)
    {
        nums[i] = (rand() % 100);
    }

    return *nums;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int n = 10;
    int arr[n];

    initalArr(arr, n);

    recArrToFile(arr, n);

    sortArr(arr, n);

    recArrToFile(arr, n);

}
