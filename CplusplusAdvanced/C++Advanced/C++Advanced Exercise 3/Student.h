#pragma once
#include <iostream>
#include <string>

class Student {
private:
	std::string naam;
	int ec;
public:
	Student() { std::cout << "student heeft naam nodig" << std::endl; delete(this); };
	Student(std::string naam) : naam(naam) { };
	Student(const Student& c);
	Student& operator=(const Student& c);
	~Student();
	std::string getNaam() { return naam; }
	int getEc() { return ec; }
};