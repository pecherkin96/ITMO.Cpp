#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x, y;
    int score = 0;
    int shots = 0;

    while (score < 50)
    {
        cout << "Введите координату x: ";
        cin >> x;
        cout << "Введите координату y: ";
        cin >> y;
        shots++;
        

        if ((x * x) + (y * y) <= 1)
        {
            score += 10;
            cout << "Заработано 10 очков" << endl;
            cout << "Итого очков: " << score << endl;
        }

        else if ((x * x) + (y * y) <= 2)
        {
            score += 5;
            cout << "Заработано 5 очков" << endl;
            cout << "Итого очков: " << score << endl;
        }
        else if ((x * x) + (y * y) <= 3)
        {
            score += 1;
            cout << "Заработано 1 очко" << endl;
            cout << "Итого очков: " << score << endl;
        }
        else 
        {
            cout << "Мимо...";
            cout << "Итого очков: " << score << endl;
        }
    }

    cout << "Стрельба окончена! Итоговый счёт: " << score << endl;
    cout << "Вы стреляли " << shots << " раз" << endl;

    if (shots < 8)
        cout << "Ваш ранг: Снайпер." << endl;
    else if (shots < 15)
        cout << "Ваш ранг: Просто стрелок." << endl;
    else
        cout << "Ваш ранг: Новичок." << endl;

}