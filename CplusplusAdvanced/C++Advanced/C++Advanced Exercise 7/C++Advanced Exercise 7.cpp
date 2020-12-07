#include "pch.h"
#include "Parent.h"
#include <iostream>

int main() {
	//Parent* p1 = new Parent("Parent1");
	std::shared_ptr<Parent> p1 = std::make_shared<Parent>("Parent1");
	std::cout << "p1: " << *p1 << std::endl;

	//Parent* p2 = new Parent(*p1); // roept de copy constructor aan
	std::shared_ptr<Parent> p2 = std::make_shared<Parent>(*p1);
	std::cout << "p2: " << *p2 << std::endl;

	//Parent* p3 = new Parent("Parent3");
	std::shared_ptr<Parent> p3 = std::make_shared<Parent>("Parent3");
	std::cout << "p3: " << *p3 << std::endl;

	*p3 = *p1; // roept de assignment operator aan
	std::cout << "p1: " << *p3 << std::endl;

	//delete p1;
	//delete p2;
	//delete p3;

	std::shared_ptr<Parent> p4 = std::make_shared<Parent>(*p1);
	std::cout << "p4: " << *p4 << std::endl;

	p4->deleteChild();

	return 0;
}