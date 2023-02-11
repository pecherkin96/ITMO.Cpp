#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

void converter(int n)
{
	if (n <= 2) 
	{
		cout << n;
		return;
	}

	else
	{
		converter(n / 2);
		cout << n % 2;
		return;
	}
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	int n;
	cout << "Перевести в двоичный формат: ";
	cin >> n;
	cout << "Итог: ";
	converter(n);
}