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
	cout << "������� ������ �������: "<< endl; cin >> degree;
	cout << "������� ���� �������: " << endl; cin >> department;
}

void Educator::show()
{
	Person::show();
	cout << "������ �������: " << degree << endl;
	cout << "�������: " << department << endl;
}

void Educator::toFile()
{
	ofstream out("AddressBook.txt", ios::app);
	out << "���������: " << rank << endl;
	out << "���: " << getFirstName() << endl;
	out << "�������: " << getLastName() << endl;
	out << "�������: " << getPhoneNum() << endl;
	out << "������ �������: " << degree << endl;
	out << "�������: " << department << endl;
	out << "\n------------------------------------------------------" << endl;
	out.close();
}