#include "pch.h"
#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <iostream>

int main()
{
#pragma region initiate pointers
	Module* module1 = new Module("Module 1", 1);
	Module* module2 = new Module("Module 2", 2);
	Module* module3 = new Module("Module 3", 3);
	
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

	module1->addDocent(docent1);
	module2->addDocent(docent2);
	module3->addDocent(docent3);

	std::vector<Student*> students1 = { student1, student2, student3, student4 };
	module1->addStudents(students1);
	module1->addStudent(student10);
	std::vector<Student*> students2 = { student5, student6, student7, student8, student9, student10 };
	module2->addStudents(students2);
	module3->addStudent(student5);
	module3->addStudent(student6);
	
	//step 1
	module1->printInfo();
	module2->printInfo();
	module3->printInfo();

	//step 2
	student1->setEc(module1->checkEcForStudent(student1) + module2->checkEcForStudent(student1) + module3->checkEcForStudent(student1));
	student2->setEc(module1->checkEcForStudent(student2) + module2->checkEcForStudent(student2) + module3->checkEcForStudent(student3));
	student3->setEc(module1->checkEcForStudent(student3) + module2->checkEcForStudent(student3) + module3->checkEcForStudent(student3));
	student4->setEc(module1->checkEcForStudent(student4) + module2->checkEcForStudent(student4) + module3->checkEcForStudent(student4));
	student5->setEc(module1->checkEcForStudent(student5) + module2->checkEcForStudent(student5) + module3->checkEcForStudent(student5));
	student6->setEc(module1->checkEcForStudent(student6) + module2->checkEcForStudent(student6) + module3->checkEcForStudent(student6));
	student7->setEc(module1->checkEcForStudent(student7) + module2->checkEcForStudent(student7) + module3->checkEcForStudent(student7));
	student8->setEc(module1->checkEcForStudent(student8) + module2->checkEcForStudent(student8) + module3->checkEcForStudent(student8));
	student9->setEc(module1->checkEcForStudent(student9) + module2->checkEcForStudent(student9) + module3->checkEcForStudent(student3));
	student10->setEc(module1->checkEcForStudent(student10) + module2->checkEcForStudent(student10) + module3->checkEcForStudent(student3));
	
	student1->printInfo();
	student2->printInfo();
	student3->printInfo();
	student4->printInfo();
	student5->printInfo();
	student6->printInfo();
	student7->printInfo();
	student8->printInfo();
	student9->printInfo();
	student10->printInfo();
	//step3


	//step4


	//end
	getchar();
}