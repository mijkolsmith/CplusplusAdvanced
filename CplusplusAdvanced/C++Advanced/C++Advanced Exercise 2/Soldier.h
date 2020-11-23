#pragma once
#include "Decorator.h"
#include <iostream>

class Soldier : public Decorator {
private:
	std::string role = "Soldier";
public:
	Soldier(Component& decorator) : Decorator(decorator) { };
	virtual void render() { std::cout << role << " "; Decorator::render(); }
};