#include "pch.h"
#include "Bankrekening.h"

Bankrekening::Bankrekening()
{

}

Bankrekening::~Bankrekening()
{
	
}

Bankrekening::Bankrekening(const Bankrekening& other)
{
	if (this == &other) return;
	return;
}

Bankrekening& Bankrekening::operator=(const Bankrekening& other)
{
	if (this == &other) return *this;
	return *this;
}

Bankrekening& operator+(Bankrekening& lhs, const Transactie& rhs)
{
	lhs.verwerkTransactie(rhs, true);
	return lhs;
}

Bankrekening& operator-(Bankrekening& lhs, const Transactie& rhs)
{
	lhs.verwerkTransactie(rhs, false);
	return lhs;
}

Bankrekening& Bankrekening::operator+=(const Transactie& other)
{
	saldo += other.getWaarde();
	return *this;
}

Bankrekening& Bankrekening::operator-=(const Transactie& other)
{
	saldo -= other.getWaarde();
	return *this;
}

std::ostream& Bankrekening::operator<<(const Bankrekening& other)
{
	return std::cout << other.getSaldo();
}

void Bankrekening::verwerkTransactie(const Transactie & other, bool positive)
{
	if (positive == true)
	{
		saldo += other.getWaarde();
	}
	else
	{
		saldo -= other.getWaarde();
	}
}
