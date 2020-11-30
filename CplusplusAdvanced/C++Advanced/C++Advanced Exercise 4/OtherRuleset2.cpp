#include "pch.h"
#include "OtherRuleset2.h"

bool OtherRuleset2::doAlgorithm(Cell cell)
{
	if (cell.alive == 1 && (cell.neighboursAlive == 0 || cell.neighboursAlive == 8))
	{
		cell.alive = 0;
	}
	if (cell.alive == 0 && (cell.neighboursAlive > 0 && cell.neighboursAlive < 8))
	{
		cell.alive = 1;
	}
	return cell.alive;
}
