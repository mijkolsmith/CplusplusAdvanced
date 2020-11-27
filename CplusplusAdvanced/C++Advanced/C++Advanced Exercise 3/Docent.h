#pragma once
#include <iostream>
#include <string>

class Docent {
private:
	std::string naam;
public:
	Docent() { std::cout << "docent heeft naam nodig" << std::endl; delete(this); };
	Docent(std::string naam) : naam(naam) { };
	Docent(const Docent& c);
	Docent& operator=(const Docent& c);
	~Docent();
	std::string getNaam() { return naam; }
};