#include "pch.h"
#include "Grid.h"

Grid::Grid()
{

}

int Grid::getNeighboursAliveCount(int x, int y)
{
	int count = 0;
	count += (cells[y][x + 1].alive == 1);
	count += (cells[y][x - 1].alive == 1);
	count += (cells[y + 1][x].alive == 1);
	count += (cells[y - 1][x].alive == 1);
	count += (cells[y + 1][x + 1].alive == 1);
	count += (cells[y + 1][x - 1].alive == 1);
	count += (cells[y - 1][x + 1].alive == 1);
	count += (cells[y - 1][x - 1].alive == 1);
	return count;
}

void Grid::nextStep()
{
	for (int i = 0; i < sizeof(cells) / sizeof(cells[0]); i++)
	{
		for (int j = 0; j < sizeof(cells[0]) / sizeof(cells[0][0]); j++)
		{
			if (cells[i][j].alive == 1 && (getNeighboursAliveCount(i, j) < 2 || getNeighboursAliveCount(i, j) > 3))
			{
				cells[i][j].alive = 0;
			}
			if (cells[i][j].alive == 0 && getNeighboursAliveCount(i, j) == 3)
			{
				cells[i][j].alive = 1;
			}
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
				std::cout << "X";
			}
			else
			{
				std::cout << "O";
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
		for (int j = 0; j < sizeof(cells[0]) / sizeof(int); j++)
		{
			if (cells[i][j].alive)
			{
				count++;
			}
		}
	}
	return count;
}

