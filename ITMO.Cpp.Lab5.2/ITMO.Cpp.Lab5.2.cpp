#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int* max_vect(int len, int* array1, int* array2)
{
    int* max = new int[len];

    for (int i = 0; i < len; i++)
    {
        max[i] = (array1[i] > array2[i]) ? array1[i] : array2[i];
    }
    return max;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    int* c; //Указатель на результирующий массив
    c = max_vect(kc, a, b); //вызов функции для создания массива
    for (int i = 0; i < kc; i++) //Вывод результата.
        cout << c[i] << " ";
    cout << endl;
    delete[]c; //Возврат памяти
}
