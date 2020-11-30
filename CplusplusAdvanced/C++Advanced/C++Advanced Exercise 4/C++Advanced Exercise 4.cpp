#include "pch.h"
#include "Grid.h"
#include "Conway.h"
#include "OtherRuleset.h"
#include "OtherRuleset2.h"
#include <iostream>

int main()
{
	Grid grid;

	grid.cells[20][1].alive = 1;
	grid.cells[19][2].alive = 1;
	grid.cells[19][3].alive = 1;
	grid.cells[20][3].alive = 1;
	grid.cells[21][3].alive = 1;

	grid.cells[1][4].alive = 1;
	grid.cells[1][6].alive = 1;
	grid.cells[2][2].alive = 1;
	grid.cells[2][3].alive = 1;
	grid.cells[2][4].alive = 1;
	grid.cells[2][6].alive = 1;
	grid.cells[2][7].alive = 1;
	grid.cells[2][8].alive = 1;
	grid.cells[3][1].alive = 1;
	grid.cells[3][5].alive = 1;
	grid.cells[3][9].alive = 1;
	grid.cells[4][1].alive = 1;
	grid.cells[4][3].alive = 1;
	grid.cells[4][7].alive = 1;
	grid.cells[4][9].alive = 1;
	grid.cells[5][2].alive = 1;
	grid.cells[5][3].alive = 1;
	grid.cells[5][5].alive = 1;
	grid.cells[5][7].alive = 1;
	grid.cells[5][8].alive = 1;
	grid.cells[7][2].alive = 1;
	grid.cells[7][3].alive = 1;
	grid.cells[7][5].alive = 1;
	grid.cells[7][7].alive = 1;
	grid.cells[7][8].alive = 1;
	grid.cells[8][1].alive = 1;
	grid.cells[8][3].alive = 1;
	grid.cells[8][7].alive = 1;
	grid.cells[8][9].alive = 1;
	grid.cells[9][1].alive = 1;
	grid.cells[9][5].alive = 1;
	grid.cells[9][9].alive = 1;
	grid.cells[10][2].alive = 1;
	grid.cells[10][3].alive = 1;
	grid.cells[10][4].alive = 1;
	grid.cells[10][6].alive = 1;
	grid.cells[10][7].alive = 1;
	grid.cells[10][8].alive = 1;
	grid.cells[11][4].alive = 1;
	grid.cells[11][6].alive = 1;

	grid.setStrategy(new Conway());
	//grid.setStrategy(new OtherRuleset());
	//grid.setStrategy(new OtherRuleset2());
	grid.displayGrid();
	getchar();

	while (grid.aliveCount() > 0)
	{
		grid.nextStep();
		grid.displayGrid();
		getchar();
	}
}