#pragma once

#include "GameStates.h";
#include "BulletSolver.h"
#include "CylinderSolver.h"
#include "BruteForceSolver.h"
#include "Toolbox.h"

class Game
{
public:
	Game();
	~Game();

	void InitGame();

	void RunGame();

	bool GetGameIsRunning();
	void SetGameIsRunning(bool);

private:

	
	bool gameIsRunning;
	GameStates state;
};