#include <iostream>
#include <Windows.h>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    int sec()
    {
        int s = (hours * 3600) + (minutes * 60) + seconds;
        return s;
    }

    Time sumTime(Time t)
    {

        t.hours = t.hours + hours;
        t.minutes = t.minutes + minutes;
        t.seconds = t.seconds + seconds;

        if (t.minutes >= 60)
        {
            t.minutes -= 60;
            t.hours++;
        }
        if (t.seconds >= 60)
        {
            t.seconds -= 60;
            t.minutes++;
        }

        return t;
    }

    Time subTime(Time t)
    {

        t.hours = t.hours - hours;
        t.minutes = t.minutes - minutes;
        t.seconds = t.seconds - seconds;

        if (t.minutes < 0)
        {
            t.hours--;
        }
        if (t.seconds < 0)
        {
            t.minutes--;
        }

        return t;
    }

    void ShowTime()
    {
        cout << hours << " Часов " << minutes << " Минут " << seconds << " Секунд " << endl;
        cout << "Всего секунд: " << sec() << endl;
    }
};

Time InputTime()
{
    Time t;

    cout << "Введите часы: ";
    cin >> t.hours;
    cout << "Введите минуты: ";
    cin >> t.minutes;
    cout << "Ввдите секунды: ";
    cin >> t.seconds;

    return t;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time t1 = InputTime();
    Time t2 = InputTime();
    Time t3 = t2.sumTime(t1);
    Time t4 = t2.subTime(t1);

    t1.ShowTime();
    t2.ShowTime();
    t3.ShowTime();
    t4.ShowTime();
}