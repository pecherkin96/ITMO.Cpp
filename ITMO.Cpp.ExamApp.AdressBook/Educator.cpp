#include "Educator.h"

Educator::Educator()
{
	department = "---";
	degree = "---";
}

Educator::~Educator()
{
	Educator::toFile();
}

void Educator::input()
{
	Person::input();
	cout << "Введите учёную степень: "<< endl; cin >> degree;
	cout << "Введите вашу кафедру: " << endl; cin >> department;
}

void Educator::show()
{
	Person::show();
	cout << "Учёная степень: " << degree << endl;
	cout << "Кафедра: " << department << endl;
}

void Educator::toFile()
{
	ofstream out("AddressBook.txt", ios::app);
	out << "Должность: " << rank << endl;
	out << "Имя: " << getFirstName() << endl;
	out << "Фамилия: " << getLastName() << endl;
	out << "Телефон: " << getPhoneNum() << endl;
	out << "Учёная степень: " << degree << endl;
	out << "Кафедра: " << department << endl;
	out << "\n------------------------------------------------------" << endl;
	out.close();
}