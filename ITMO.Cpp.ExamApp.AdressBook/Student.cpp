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
	cout << "������� ����� ������ ��������: "<< endl; cin >> group_num;
	cout << "���������� ������ ��������(������� q ����� ���������): "<< endl;
	while (cin >> n)
		marks.push_back(n);
	cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
}

void Student::show()
{
	cout << "���������: " << rank << endl;
	Person::show();
	cout << "������: " << group_num << endl;
	cout << "������: ";
	for (auto x : marks)
		cout << x << " ";
	cout << endl;
}

void Student::toFile()
{
	ofstream out("AddressBook.txt", ios::app);
	out << "���������: " << rank << endl;
	out << "���: " << getFirstName() << endl;
	out << "�������: " << getLastName() << endl;
	out << "�������: " << getPhoneNum() << endl;
	out << "����� ������: " << group_num << endl;
	out << "������: ";
	for (auto x : marks)
		out << x << " ";
	out << "\n------------------------------------------------------" << endl;
	out.close();
}