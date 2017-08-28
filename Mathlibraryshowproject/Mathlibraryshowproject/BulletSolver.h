#pragma once

#include "Solver.h"


class BulletSolver : public Solver
{
public:
	BulletSolver();
	~BulletSolver();

	void RunSolver() override;

private:

};

