#include "pch.h"
#include "Docent.h"

Docent::Docent(const Docent& c)
{
	if (this == &c) return;
	return;
}

Docent & Docent::operator=(const Docent& c)
{
	if (this == &c) return *this;
	return *this;
}

Docent::~Docent()
{

}