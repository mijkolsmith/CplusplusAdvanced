#include "pch.h"
#include "Block.h"
#include <iostream>

//constructor
Block::Block(int size, std::string name) : name(name), size(size) {
	std::cout << "CTOR Block '" << name << "' @" << this << std::endl;
	this->data = new int[size];
}

//destructor
Block::~Block() noexcept {
	std::cout << "DTOR Block '" << this->name << "' @" << this << std::endl;
	delete[] data;
}

//copy constructor
Block::Block(const Block& other) : name(other.name), size(other.size) {
	std::cout << "CCTOR Block '" << other.name << "' @" << this << std::endl;
	this->data = new int[size];

	std::copy(other.data, other.data + other.size, data);
}

//assignment operator
Block& Block::operator=(const Block& other) {
	std::cout << "Assignment opr Block '" << this->name << "' @" << this << std::endl;
	if (this == &other) return *this;

	delete[] data;

	this->name = other.name;
	this->size = other.size;
	this->data = new int[size];
	std::copy(other.data, other.data + other.size, data);
	return *this;
}

#ifdef MOVESEMANTICS

// move-constructor
Block::Block(Block&& other) noexcept {
	std::cout << "Move CTOR from Block '" << other.name << "' @" << &other << " to Block @" << this << std::endl;
	name = std::move(other.name);
	data = other.data;
	size = other.size;

	// 'reset' 't originele object
	other.name = "(nodata: has been moved)";
	other.size = 0;
	other.data = nullptr;
}

//move-assignment operator
Block& Block::operator=(Block&& other)
{
	if (this == &other) return *this;
	std::cout << "Move Assignment Opr from Block '" << other.name << "' @" << &other << " to Block @" << this << std::endl;
	name = std::move(other.name);
	data = other.data;
	size = other.size;

	other.name = "(nodata: has been moved)";
	other.size = 0;
	other.data = nullptr;
	return *this;
}
#endif

std::ostream& operator<<(std::ostream& os, const Block& block) {
	os << "Block @" << &block << " name:" << block.name << " size:" << block.size;
	return os;
}