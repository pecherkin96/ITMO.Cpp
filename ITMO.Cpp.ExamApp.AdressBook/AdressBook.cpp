#include "AdressBook.h"

void AdressBook::addNote()
{
	string choice_person;
	string choice;
	do {
		cout << "�������� �������� ��� �������������? ������� 's' ��� ��������, 'e' ��� �������������. " << endl;
		cin >> choice_person;
		if (choice_person == "s")
		{
			notes[number_notes] = new Student;
			notes[number_notes]->input();
		}
		else
		{
			notes[number_notes] = new Educator();
			notes[number_notes]->input();
		}
		number_notes++;
		cout << "�������� ��� �����? ������� 'y' ���� ��������, 'n' ���� ���������."<< endl;
		cin >> choice;
	} while (choice == "y");
}

void AdressBook::show()
{
	for (int j = 0; j < number_notes; j++)
	{
		notes[j]->show();
	}
}

void AdressBook::toFile()
{
	for (int j = 0; j < number_notes; j++)
	{
		notes[j]->toFile();
	}
}