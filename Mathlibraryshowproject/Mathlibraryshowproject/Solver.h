#pragma once

#include <iostream>
#include "GameStates.h"

class Solver
{
public:
	Solver();
	~Solver();

	virtual void RunSolver();

	virtual void FinishSolver(GameStates&);

private:

};