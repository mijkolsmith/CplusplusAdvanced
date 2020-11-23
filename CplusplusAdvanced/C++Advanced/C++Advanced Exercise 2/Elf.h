#pragma once
#include "Component.h"
#include <iostream>
#include <string>

class Elf : public Component{
private:
	std::string name = "Elf";
public:
	virtual void render();
};