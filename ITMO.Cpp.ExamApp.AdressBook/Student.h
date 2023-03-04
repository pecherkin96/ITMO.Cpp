#pragma once
#include <vector>
#include <fstream>
#include "Person.h"

using namespace std;

class Student : public Person
{
public:
	Student();
	~Student();
	void input();
	void show();
	void toFile();

private:
	string rank = "�������";
	vector<int> marks;
	string group_num;
};

