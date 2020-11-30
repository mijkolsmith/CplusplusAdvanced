#include "pch.h"
#include "Conway.h"

bool Conway::doAlgorithm(Cell cell)
{
	if (cell.alive == 1 && (cell.neighboursAlive < 2 || cell.neighboursAlive > 3))
	{
		cell.alive = 0;
	}
	if (cell.alive == 0 && cell.neighboursAlive == 3)
	{
		cell.alive = 1;
	}
	return cell.alive;
}
