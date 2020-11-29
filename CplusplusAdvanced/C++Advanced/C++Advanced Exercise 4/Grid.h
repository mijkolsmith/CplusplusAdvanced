#pragma once
#include "Cell.h"
#include <iostream>
#include <string>

class Grid{
public:
	Cell cells[25][25];
	Grid();
	int getNeighboursAliveCount(int x, int y);
	void nextStep();
	void displayGrid();
	int aliveCount();
};