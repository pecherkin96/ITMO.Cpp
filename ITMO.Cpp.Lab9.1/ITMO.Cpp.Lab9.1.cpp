#include <iostream>
#include <Windows.h>
using namespace std;

class Triangle
{
public:
    Triangle(double a, double b, double c)
    {
        a_side = a;
        b_side = b;
        c_side = c;

        if (c >= a + b or a >= b + c or b >= a + c)
            throw Triangle::TriangleErr("TriangleErr");
    }
    double area() const
    {
        double p = (a_side + b_side + c_side) / 2;
        double s = sqrt(p * (p - a_side) * (p - b_side) * (p - c_side));
        return s;
    }

    class TriangleErr
    {
    public:
        string nameObj;
        TriangleErr(string triangle) : nameObj(triangle) 
        {}
    };

private:
    double a_side, b_side, c_side;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c;
    
    cout << "Введите стороны треугольника" << endl;    
    cin >> a >> b >> c;
    try {
        Triangle triangle(a, b, c);

        cout << "Площадь треугольника: " << triangle.area() << endl;
    }
    catch (Triangle::TriangleErr& ex)
    {
        cerr << "Треугольника не существует " << ex.nameObj;
    }
}