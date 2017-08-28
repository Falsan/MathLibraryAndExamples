#include <iostream>;
#include<memory>;
#include "Game.h"

int main()
{
	//std::unique_ptr<Game> gamePointer;

	auto gamePointer = std::make_unique<Game>();

	gamePointer->InitGame();

	while (gamePointer->GetGameIsRunning())
	{
		gamePointer->RunGame();
	}

	return 0;
}