#include <iostream>
#include <Windows.h>
#include <nlohmann/json.hpp> 
#include <fstream> 
#include <vector>
using json = nlohmann::json;
using namespace std;

vector<int> sortArr(vector<int> arr, int n)
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

    return arr;
}

int createArrayJson(int* arr, int n)
{
    json j;
    
    j["nums"] = { 6, 44, 53, 7, 22, 12, 9, 79 };

    ofstream o("nums.json");

    if (!o)
    {
        cout << "Файл открыть невозможно\n";
    }

    o << setw(4) << j << endl;
    o.close();

    return(1);

}

int sortArrayJson()
{
    ifstream i("nums.json");
    if (!i)
    {
        cout << "Файл открыть невозможно\n";
    }

    json jin;
    json jout;

    i >> jin;

    i.close();

    vector<int> arr =  jin["nums"];
    int s = jin["nums"].size();
    

    jout["sortedNums"] = sortArr(arr, s);
    

    ofstream o("sortedNums.json");
    if (!o)
    {
        cout << "Файл открыть невозможно\n";
    }

    o << setw(4) << jout << endl;

    return(1);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int n = 10;
    int arr[n];

    createArrayJson(arr, n);
    sortArrayJson();
}