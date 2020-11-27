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
