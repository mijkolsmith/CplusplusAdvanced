#pragma once
#include "Cell.h"
#include "Strategy.h"

class OtherRuleset2 : public Strategy {
public:
	bool doAlgorithm(Cell cell);
	~OtherRuleset2() { }
};