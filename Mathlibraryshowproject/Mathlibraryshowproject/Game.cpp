#include "Game.h"

Game::Game()
{
	gameIsRunning = true;
	state = GameStates::menu;
}

Game::~Game()
{
}

void Game::InitGame()
{
	gameIsRunning = true;
}

void Game::RunGame()
{
	if (state == GameStates::menu)
	{
		//do menu stuff
		std::cout << "Please select a solver to run" << std::endl << std::endl;
		std::cout << "1. Bullet Problem Solver" << std::endl;
		std::cout << "2. Cylinder Problem Solver" << std::endl;
		std::cout << "3. Simultaneous Equation Solver" << std::endl;
		std::cout << "4. Exit" << std::endl;
		int selection;
		std::cin >> selection;

		switch (selection)
		{
		case 1: 
			state = GameStates::bulletSolver;

			break;

		case 2:
			state = GameStates::cylinderSolver;

			break;

		case 3:
			state = GameStates::bruteForceSolver;

			break;

		case 4:
			SetGameIsRunning(false);

			break;

		default:
			state = GameStates::menu;
			break;
		}

	}
	else if (state == GameStates::bulletSolver)
	{
		//do bullet solver stuff
		BulletSolver* solver = new BulletSolver;
		solver->RunSolver();
		solver->FinishSolver(state);
		delete solver;
	}
	else if (state == GameStates::cylinderSolver)
	{
		CylinderSolver* solver = new CylinderSolver;
		solver->RunSolver();
		solver->FinishSolver(state);
		delete solver;
	}
	else if (state == GameStates::bruteForceSolver)
	{
		BruteForceSolver* solver = new BruteForceSolver;
		solver->RunSolver();
		solver->FinishSolver(state);
		delete solver;
	}

	Toolbox::ClearScreen();
}

void Game::SetGameIsRunning(bool toSet)
{
	gameIsRunning = toSet;
}

bool Game::GetGameIsRunning()
{
	return gameIsRunning;
}