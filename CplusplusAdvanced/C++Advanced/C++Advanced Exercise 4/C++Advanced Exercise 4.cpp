#include "pch.h"
#include "Grid.h"
#include "Conway.h"
#include "OtherRuleset.h"
#include "OtherRuleset2.h"
#include <iostream>

int main()
{
	Grid grid;

	grid.cells[1][1].alive = 1;
	grid.cells[2][2].alive = 1;
	grid.cells[6][5].alive = 1;
	grid.cells[15][15].alive = 1;
	grid.cells[15][16].alive = 1;
	grid.cells[16][15].alive = 1;
	grid.cells[16][17].alive = 1;
	grid.cells[17][16].alive = 1;
	grid.cells[9][10].alive = 1;
	grid.cells[10][10].alive = 1;
	grid.cells[11][10].alive = 1;
	grid.cells[20][1].alive = 1;
	grid.cells[19][2].alive = 1;
	grid.cells[19][3].alive = 1;
	grid.cells[20][3].alive = 1;
	grid.cells[21][3].alive = 1;

	//grid.setStrategy(new Conway());
	//grid.setStrategy(new OtherRuleset());
	grid.setStrategy(new OtherRuleset2());
	grid.displayGrid();
	getchar();

	while (grid.aliveCount() > 0)
	{
		grid.nextStep();
		grid.displayGrid();
		getchar();
	}
}