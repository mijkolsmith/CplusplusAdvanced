#pragma once
#include "Cell.h"
#include "Strategy.h"
#include <iostream>
#include <string>

class Grid{
private:
	Strategy* strategy;
public:
	Cell cells[25][25];
	Grid(Strategy* strategy = nullptr) : strategy(strategy) { };
	int getNeighboursAliveCount(int x, int y);
	bool inBounds(int x, int y);
	void nextStep();
	void displayGrid();
	int aliveCount();
	~Grid() { delete strategy; }
	void setStrategy(Strategy* strategy);
};