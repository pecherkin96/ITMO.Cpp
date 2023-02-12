#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int Myroot(double, double, double, double&, double&);

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D = b * b - 4 * a * c;

	if (D > 0) 
	{
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		return 1;
	}
	else if (D == 0) 
	{
		x1 = (-b) / (2 * a);
		x2 = x1;
		return 0;
	}
	else if (D < 0)
	{

		return -1;
	}
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	double a, b, c, x1 = 0, x2 = 0;

	cout << "Введите коэфиценты квадратного уравнения: ";
	cin >> a >> b >> c;

	switch (Myroot(a, b, c, x1, x2))
	{
	case(1):
		cout << "Уравнение имеет два корня: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		break;
	case(0):
		cout << "Уравнение имеет один корень: " << endl;
		cout << "x = " << x1 << endl;
		break;
	case(-1):
		cout << "Уравнение не имеет корней" << endl;
		break;
	}
	
}