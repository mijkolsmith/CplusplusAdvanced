#pragma once
#include "Component.h"
#include <iostream>
#include <string>

class Orc : public Component{
private:
	std::string name = "Orc";
public:
	virtual void render();
};