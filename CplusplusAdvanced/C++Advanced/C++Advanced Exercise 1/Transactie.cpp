#include "pch.h"
#include "Transactie.h"

Transactie::Transactie() 
{

}

Transactie::~Transactie()
{

}

Transactie::Transactie(const Transactie& other)
{
	if (this == &other) return;
	return;
}

Transactie& Transactie::operator=(const Transactie& other)
{
	if (this == &other) return *this;
	return *this;
}
