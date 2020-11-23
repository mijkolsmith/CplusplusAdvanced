#include "pch.h"
#include "Transactie.h"
#include "Bankrekening.h"
#include <iostream>
int main()
{
	Bankrekening* rekening = new Bankrekening();
	Transactie* vijfEuro = new Transactie(5);
	*rekening += *vijfEuro;
	std::cout << rekening->getSaldo() << std::endl;
	system("pause");
}