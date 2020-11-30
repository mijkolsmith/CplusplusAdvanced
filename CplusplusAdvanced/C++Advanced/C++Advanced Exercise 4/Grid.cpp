#include "pch.h"
#include "Grid.h"

int Grid::getNeighboursAliveCount(int x, int y)
{
	//https://stackoverflow.com/questions/21925239/game-of-life-c-checking-neighbors
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (!(i == 0 && j == 0) && inBounds(x + i, y + j) && cells[x + i][y + j].alive == 1)
				count++;
		}
	}
	return count;
}

bool Grid::inBounds(int x, int y)
{
	return ((x >= 0 && x < sizeof(cells) / sizeof(cells[0])) && (y >= 0 && y < sizeof(cells[0]) / sizeof(cells[0][0])));
}

void Grid::nextStep()
{
	for (int i = 0; i < sizeof(cells) / sizeof(cells[0]); i++)
	{
		for (int j = 0; j < sizeof(cells[0]) / sizeof(cells[0][0]); j++)
		{
			cells[i][j].neighboursAlive = getNeighboursAliveCount(i, j);
		}
	}

	for (int i = 0; i < sizeof(cells) / sizeof(cells[0]); i++)
	{
		for (int j = 0; j < sizeof(cells[0]) / sizeof(cells[0][0]); j++)
		{
			cells[i][j].alive = strategy->doAlgorithm(cells[i][j]);
		}
	}
}

void Grid::displayGrid()
{
	for (int i = 0; i < sizeof(cells) / sizeof(cells[0]); i++)
	{
		for (int j = 0; j < sizeof(cells[0]) / sizeof(cells[0][0]); j++)
		{
			if (cells[i][j].alive)
			{
				std::cout << "X ";
			}
			else
			{
				std::cout << "  ";
			}
			
		}
		std::cout << std::endl;
	}
}

int Grid::aliveCount()
{
	int count = 0;
	for (int i = 0; i < sizeof(cells) / sizeof(cells[0]); i++)
	{
		for (int j = 0; j < sizeof(cells[0]) / sizeof(cells[0][0]); j++)
		{
			if (cells[i][j].alive)
			{
				count++;
			}
		}
	}
	return count;
}

void Grid::setStrategy(Strategy* strategy)
{
	delete this->strategy;
	this->strategy = strategy;
}

