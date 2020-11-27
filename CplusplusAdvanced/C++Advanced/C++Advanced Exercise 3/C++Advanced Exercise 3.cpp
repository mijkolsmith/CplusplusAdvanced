#include "pch.h"
#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <iostream>

int main()
{
#pragma region initiate pointers
	Module* module1 = new Module("module1", 1);
	Module* module2 = new Module("module2", 2);
	Module* module3 = new Module("module3", 3);
	
	Docent* docent1 = new Docent("docent1");
	Docent* docent2 = new Docent("docent2");
	Docent* docent3 = new Docent("docent3");

	Student* student1 = new Student("student1");
	Student* student2 = new Student("student2");
	Student* student3 = new Student("student3");
	Student* student4 = new Student("student4");
	Student* student5 = new Student("student5");
	Student* student6 = new Student("student6");
	Student* student7 = new Student("student7");
	Student* student8 = new Student("student8");
	Student* student9 = new Student("student9");
	Student* student10 = new Student("student10");
#pragma endregion



}