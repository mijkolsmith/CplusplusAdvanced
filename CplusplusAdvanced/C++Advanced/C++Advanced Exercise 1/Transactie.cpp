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
	transactieWaarde = other.transactieWaarde;
	transactieDatum = other.transactieDatum;
	positive = other.positive;
	return;
}

Transactie& Transactie::operator=(const Transactie& other)
{
	if (this == &other) return *this;
	transactieWaarde = other.transactieWaarde;
	transactieDatum = other.transactieDatum;
	positive = other.positive;
	return *this;
}
