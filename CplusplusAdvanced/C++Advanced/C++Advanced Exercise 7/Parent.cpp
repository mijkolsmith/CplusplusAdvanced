#include "pch.h"
#include "Parent.h"
#include <iostream>

Parent::Parent(std::string name) {
	this->name = name;
	std::string childName = "ChildOf" + name;
	//this->child = new Child(childName);
	this->child = std::make_unique<Child>(childName);
}

Parent::Parent(const Parent& other) {
	std::cout << "Parent copy constructor" << std::endl;
	this->name = other.name;
	//this->child = new Child(*other.child);
	this->child = std::make_unique<Child>(*other.child);
}

Parent::~Parent() {
	std::cout << "Parent destructor: " << this->name << std::endl;
	//delete this->child;
}

Parent& Parent::operator=(const Parent& other) {
	std::cout << "Parent assignment operator" << std::endl;

	if (this == &other) return *this;

	this->name = other.name;
	//delete this->child;
	//this->child = new Child(*other.child);
	this->child = std::make_unique<Child>(*other.child);

	return *this;
}

void Parent::deleteChild()
{
	this->child = NULL;
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
	os << "parent name: " << parent.name << "," << *parent.child;
	return os;
}
