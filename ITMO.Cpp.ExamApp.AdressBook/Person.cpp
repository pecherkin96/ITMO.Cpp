#include "Person.h"
using namespace std;

Person::Person()
{
	first_name = "---";
	last_name = "---";
	phone_num = 0;
}
Person::~Person() {};
string Person::getFirstName() { return first_name; }
string Person::getLastName() { return last_name; }
int Person::getPhoneNum() { return phone_num; }

void Person::input()
{
	cout << "�������: "; cin >> last_name;
	cout << "���: "; cin >> first_name;
	cout << "�������: "; cin >> phone_num;
}

void Person::show()
{
	cout << "�������: " << last_name << endl;
	cout << "���: " << first_name << endl;
	cout << "�������: " << phone_num << endl;
}

