#pragma once
#include "Docent.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

class Module {
private:
	std::string naam;
	int ec;
	Docent* docent;
	std::vector<Student*> students;
public:
	Module() { std::cout << "module heeft naam en ec nodig" << std::endl; delete(this); };
	Module(std::string naam) { std::cout << "module heeft naam en ec nodig" << std::endl; delete(this); };
	Module(int ec) { std::cout << "module heeft naam en ec nodig" << std::endl; delete(this); };
	Module(std::string naam, int ec) : naam(naam), ec(ec) { };
	Module(const Module& c);
	Module& operator=(const Module& c);
	~Module();
	std::string getNaam() { return naam; }
	int getEc() { return ec; }
	void addDocent(Docent* docent);
	Docent* getDocent() { return docent; };
	void addStudent(Student* student);
	void addStudents(std::vector<Student*> students);
	Student* getStudent(int i) { return students[i]; };
	std::vector<Student*> getStudents() { return students; };
	void printInfo();
	int checkEcForStudent(Student* student);
};