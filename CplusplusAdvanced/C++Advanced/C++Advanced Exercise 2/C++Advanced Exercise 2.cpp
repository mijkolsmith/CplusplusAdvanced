#include "pch.h"
#include "Component.h"
#include "Decorator.h"
#include "Elf.h"
#include "Orc.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"
#include <iostream>

int main()
{
	Elf* elf = new Elf();
	elf->render();

	Shaman* shamanElf = new Shaman(*elf);
	shamanElf->render();

	Orc* orc = new Orc();
	orc->render();

	Farmer* farmerOrc = new Farmer(*orc);
	farmerOrc->render();

	system("pause");

	return 0;
}