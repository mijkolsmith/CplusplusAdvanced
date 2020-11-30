#include "pch.h"
#include "OtherRuleset.h"

bool OtherRuleset::doAlgorithm(Cell cell)
{
	if (cell.alive == 1 && (cell.neighboursAlive < 3 || cell.neighboursAlive > 4))
	{
		cell.alive = 0;
	}
	if (cell.alive == 0 && (cell.neighboursAlive == 3 || cell.neighboursAlive == 4))
	{
		cell.alive = 1;
	}
	return cell.alive;
}
