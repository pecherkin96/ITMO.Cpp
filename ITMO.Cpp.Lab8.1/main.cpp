#include <iostream>
#include <windows.h>
#include "Time.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	int h, m, s;

	try {
		cout << "Введите: часы, минуты, секунды: " << endl;
		if (!(cin >> h >> m >> s))
			throw Time::NumberErr();

		Time const t4 = Time(h, m, s);
		t4.showTime();
	}
	catch (Time::NumberErr& ex)
	{
		ex.printMessage();
	}
    

}