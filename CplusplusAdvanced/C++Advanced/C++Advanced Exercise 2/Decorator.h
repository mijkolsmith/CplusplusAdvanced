#pragma once
#include "Component.h"

class Decorator : public Component{
private:
	Component& decorator;
public:
	Decorator(Component& decorator) : decorator(decorator) { };
	virtual void render() { decorator.render(); }
};