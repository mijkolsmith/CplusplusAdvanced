#pragma once
#include "Cell.h"
#include <iostream>
#include <vector>

class Strategy {
public:
	virtual bool doAlgorithm(Cell cell) = 0;
	virtual ~Strategy() { }
};