#pragma once
#include <string>

class Transactie{
private:
	size_t transactieDatum = NULL;
	float transactieWaarde = 0;
	bool positive = false;
public:
	Transactie();
	Transactie(float _waarde, bool _positive) : transactieWaarde(_waarde), positive(_positive) {};
	~Transactie();
	Transactie(const Transactie& other);
	Transactie& operator=(const Transactie& other);
	const float getWaarde() const { return transactieWaarde; };
	void setDatum(size_t date) { transactieDatum = date; };
	const size_t getDatum() const { return transactieDatum; };
	const bool getPositief() const { return positive; };
};