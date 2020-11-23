#pragma once
#include "Decorator.h"
#include <iostream>

class Shaman : public Decorator {
private:
	std::string role = "Shaman";
public:
	Shaman(Component& decorator) : Decorator(decorator) { };
	virtual void render() { std::cout << role << " "; Decorator::render();  }
};