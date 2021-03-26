#pragma once
#include "Transactie.h"
#include <iostream>
#include <vector>

class Bankrekening {
private:
	float saldo = 0;
	std::vector<Transactie> history;
public:
	Bankrekening();
	Bankrekening(float waarde) : saldo(waarde) {};
	~Bankrekening();
	Bankrekening(const Bankrekening& other);
	Bankrekening& operator=(const Bankrekening& other);
	friend Bankrekening& operator+(Bankrekening& lhs, const Transactie& rhs);
	friend Bankrekening& operator-(Bankrekening& lhs, const Transactie& rhs);
	Bankrekening& operator+=(const Transactie& other);
	Bankrekening& operator-=(const Transactie & other);
	std::ostream& operator<<(const Bankrekening& other);
	const float getSaldo() const { return saldo; };
	void verwerkTransactie(const Transactie& transactie, bool positive);
};