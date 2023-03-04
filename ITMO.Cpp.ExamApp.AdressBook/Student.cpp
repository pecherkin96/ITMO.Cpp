#include "Student.h"

using namespace std;

Student::Student()
{
	group_num = "---";

}

Student::~Student()
{
	Student::toFile();
}

void Student::input()
{
	Person::input();
	int n;
	cout << "Введите номер группы студента: "<< endl; cin >> group_num;
	cout << "Добавление оценок студента(нажмите q чтобы закончить): "<< endl;
	while (cin >> n)
		marks.push_back(n);
	cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
}

void Student::show()
{
	cout << "Должность: " << rank << endl;
	Person::show();
	cout << "Группа: " << group_num << endl;
	cout << "Оценки: ";
	for (auto x : marks)
		cout << x << " ";
	cout << endl;
}

void Student::toFile()
{
	ofstream out("AddressBook.txt", ios::app);
	out << "Должность: " << rank << endl;
	out << "Имя: " << getFirstName() << endl;
	out << "Фамилия: " << getLastName() << endl;
	out << "Телефон: " << getPhoneNum() << endl;
	out << "Номер группы: " << group_num << endl;
	out << "Оценки: ";
	for (auto x : marks)
		out << x << " ";
	out << "\n------------------------------------------------------" << endl;
	out.close();
}