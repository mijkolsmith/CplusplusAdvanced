#include "pch.h"
#include "Child.h"
#include <iostream>

Child::Child(std::string name) {
	this->name = name;
}

Child::Child(const Child& other) {
	if (this == &other) return;
	this->name = other.name;
}

Child::~Child() {
	std::cout << "Child destructor: " << this->name << std::endl;
}

Child& Child::operator=(const Child& other) {
	if (this == &other) return *this;
	this->name = other.name;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Child& child) {
	os << " child name: " << child.name;
	return os;
}