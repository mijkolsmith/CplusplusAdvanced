#include "pch.h"
#include "Student.h"

Student::Student(const Student& c)
{
	if (this == &c) return;
	return;
}

Student & Student::operator=(const Student& c)
{
	if (this == &c) return *this;
	return *this;
}

Student::~Student()
{
}

void Student::printInfo()
{
	std::cout << naam << " ec " << ec << std::endl;
}
