#pragma once
#include "Cell.h"
#include "Strategy.h"

class OtherRuleset : public Strategy {
public:
	bool doAlgorithm(Cell cell);
	~OtherRuleset() { }
};