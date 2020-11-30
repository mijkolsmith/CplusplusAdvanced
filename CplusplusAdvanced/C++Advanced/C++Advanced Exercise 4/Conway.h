#pragma once
#include "Grid.h"
#include "Strategy.h"

class Conway : public Strategy{
public:
	bool doAlgorithm(Cell cell);
	~Conway() { }
};