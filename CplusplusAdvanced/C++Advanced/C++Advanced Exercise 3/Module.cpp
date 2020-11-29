#include "pch.h"
#include "Module.h"

Module::Module(const Module& c)
{
	if (this == &c) return;
	docent = c.docent;
	return;
}

Module & Module::operator=(const Module& c)
{
	if (this == &c) return *this;
	delete docent;
	docent = c.docent;
	return *this;
}

Module::~Module()
{
	delete docent;
}

void Module::addDocent(Docent* docent)
{
	this->docent = docent;
}

void Module::addStudent(Student* student)
{
	this->students.push_back(student);
}

void Module::addStudents(std::vector<Student*> students)
{
	int i;
	for (i = students.size() - 1; i >= 0; i--)
	{
		this->students.push_back(students[i]);
	}
}

void Module::printInfo()
{
	std::cout << getNaam() << " Docent: " << this->getDocent()->getNaam() << std::endl;
	std::cout << getNaam() << " Students: ";
	for (int i = getStudents().size() - 1; i >= 0; i--)
	{
		std::cout << getStudents().at(i)->getNaam() << " ";
	}
	std::cout << std::endl;
}

int Module::checkEcForStudent(Student* student)
{
	if (std::find(students.begin(), students.end(), student) != students.end())
	{
		return getEc();
	}
	return 0;
}
