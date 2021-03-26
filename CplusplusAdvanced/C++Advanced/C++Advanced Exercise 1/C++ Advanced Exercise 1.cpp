#include "pch.h"
#include "Transactie.h"
#include "Bankrekening.h"
#include <iostream>
#include <string>
#include <ctime>
#pragma warning(disable:4996)

int main()
{
	Bankrekening* rekening = new Bankrekening();
	Transactie* vijfEuro = new Transactie(5, true);

	struct tm* timeinfo;
	char buffer[80];
	time_t rawtime;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	vijfEuro->setDatum(strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", timeinfo));

	*rekening += *vijfEuro;
	std::cout << rekening->getSaldo() << " " << vijfEuro->getDatum() << " " << vijfEuro->getPositief() << std::endl;
	system("pause");
}