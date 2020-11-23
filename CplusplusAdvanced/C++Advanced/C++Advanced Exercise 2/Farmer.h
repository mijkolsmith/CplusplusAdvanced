#pragma once
#include "Decorator.h"
#include <iostream>

class Farmer : public Decorator {
private:
	std::string role = "Farmer";
public:
	Farmer(Component& decorator) : Decorator(decorator) { };
	virtual void render() { std::cout << role << " "; Decorator::render(); }
};