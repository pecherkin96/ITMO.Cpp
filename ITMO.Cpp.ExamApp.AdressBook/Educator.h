#pragma once
#include "Person.h"
#include <fstream>
class Educator : public Person
{
public:
	Educator();
	~Educator();
	void show();
	void input();
	void toFile();

private:
	string rank = "Преподователь";
	string degree;
	string department;
};
