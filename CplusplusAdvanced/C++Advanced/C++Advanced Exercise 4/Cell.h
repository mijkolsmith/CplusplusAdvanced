#pragma once
class Cell {
public:
	int neighboursAlive;
	bool alive;
	Cell() { alive = 0; }
};