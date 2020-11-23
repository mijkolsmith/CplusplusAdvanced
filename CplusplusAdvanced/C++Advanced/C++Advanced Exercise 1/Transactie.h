#pragma once
class Transactie{
private:
	float transactieWaarde;
public:
	Transactie();
	Transactie(int _waarde) : transactieWaarde(_waarde) {};
	~Transactie();
	Transactie(const Transactie& other);
	Transactie& operator=(const Transactie& other);
	const float getWaarde() const { return transactieWaarde; };
};