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

		Time t1 = Time(h, m, s);
		Time t2(18, 30, 22);
		Time t3 = t1 + t2;
		Time t4 = t1 - t2;
		bool t = t1 > t2;
		Time t5 = 65 + t1;
		Time t6 = t2 + 70;
		cout << "Сложили два объекта: "; t3.showTime();
		cout << "Вычли два объекта: "; t4.showTime();
		cout << t << endl;
		t5.showTime();
		t6.showTime();

	}
	catch (Time::NumberErr& ex)
	{
		ex.printMessage();
	}

}