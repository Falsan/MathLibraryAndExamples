#include "Solver.h"

Solver::Solver()
{
}

Solver::~Solver()
{
}

void Solver::RunSolver()
{
	std::cout << "Error, base version of runsolver called. Should be overritten";
}

void Solver::FinishSolver(GameStates& state)
{
	state = GameStates::menu;
}