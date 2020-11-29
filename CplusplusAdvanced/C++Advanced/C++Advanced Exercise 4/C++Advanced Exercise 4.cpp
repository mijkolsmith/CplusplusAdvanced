#include "pch.h"
#include "Grid.h"
#include <iostream>

int main()
{
	Grid grid;

	grid.cells[1][1].alive = 1;
	grid.cells[2][2].alive = 1;
	grid.cells[6][5].alive = 1;
	grid.displayGrid();
	getchar();

	while (grid.aliveCount() > 0)
	{
		grid.nextStep();
		grid.displayGrid();
		getchar();
	}
}