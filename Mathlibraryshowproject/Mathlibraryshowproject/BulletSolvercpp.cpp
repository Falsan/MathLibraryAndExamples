#include "BulletSolver.h"

BulletSolver::BulletSolver()
{
}

BulletSolver:: ~BulletSolver()
{
}

void BulletSolver::RunSolver()
{
	int timeInSeconds;
	int initialVelocity;
	int resistance;
	int position;

	std::cout << "Please enter a time in seconds";

	std::cin >> timeInSeconds;

	std::cout << "Please enter an initial velocity";

	std::cin >> initialVelocity;

	std::cout << "Please enter a resistance in m/s";

	std::cin >> resistance;

	int currentVelocity = initialVelocity;
	position = 0;

	while (timeInSeconds != 0)
	{
		currentVelocity = currentVelocity - resistance;
		position = position + currentVelocity;

		std::cout << "Object moves at: " << currentVelocity << " m/s" << std::endl;
		std::cout << "Position is now " << position << " m/s away from the starting point of '0' " << std::endl << std::endl;

		timeInSeconds--;
	}

	std::cout << "Object stopped at " << position << " m/s away from the starting point of '0' " << std::endl;

	system("pause");
}