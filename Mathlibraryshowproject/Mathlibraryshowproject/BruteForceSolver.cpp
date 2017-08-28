#include "BruteForceSolver.h"

BruteForceSolver::BruteForceSolver()
{

}

BruteForceSolver::~BruteForceSolver()
{

}

void BruteForceSolver::RunSolver()
{
	int xNumberForFirstEquation;
	int yNumberForFirstEquation;
	int zNumberForFirstEquation;

	int firstEquationAnswer;

	int xNumberForSecondEquation;
	int yNumberForSecondEquation;
	int zNumberForSecondEquation;

	int secondEquationAnswer;

	int xNumberForThirdEquation;
	int yNumberForThirdEquation;
	int zNumberForThirdEquation;

	int thirdEquationAnswer;

	bool solved = false;

	int currentXCandidate;
	int currentYCandidate;
	int currentZCandidate;

	int roof = 32;
	int floor = -32;

	currentXCandidate = floor;
	currentYCandidate = floor;
	currentZCandidate = floor;

	bool iterateZ = false;
	bool iterateY = false;
	bool iterateX = false;

	std::cout << "Please enter an X number for the first equation";
	std::cin >> xNumberForFirstEquation;
	std::cout << "Please enter a Y number for the first equation";
	std::cin >> yNumberForFirstEquation;
	std::cout << "Please enter a Z number for the first equation";
	std::cin >> zNumberForFirstEquation;
	std::cout << "Please enter an answer for the first equation";
	std::cin >> firstEquationAnswer;

	std::cout << "Please enter an X number for the second equation";
	std::cin >> xNumberForSecondEquation;
	std::cout << "Please enter a Y number for the second equation";
	std::cin >> yNumberForSecondEquation;
	std::cout << "Please enter a Z number for the second equation";
	std::cin >> zNumberForSecondEquation;
	std::cout << "Please enter an answer for the second equation";
	std::cin >> secondEquationAnswer;

	std::cout << "Please enter an X number for the third equation";
	std::cin >> xNumberForThirdEquation;
	std::cout << "Please enter a Y number for the third equation";
	std::cin >> yNumberForThirdEquation;
	std::cout << "Please enter a Z number for the third equation";
	std::cin >> zNumberForThirdEquation;
	std::cout << "Please enter an answer for the third equation";
	std::cin >> thirdEquationAnswer;

	while (solved == false)
	{
		std::cout << "Testing solution: X = " << currentXCandidate << " Y = " << currentYCandidate << " Z = " << currentZCandidate << std::endl;

		//iterate each number for this pass
		if (iterateZ)
		{
			currentZCandidate++;
			iterateZ = false;
		}
		if (iterateY)
		{
			currentYCandidate++;
			iterateY = false;
		}
		if (iterateX)
		{
			currentXCandidate++;
			iterateX = false;
		}

		//check if correct
		if ((xNumberForFirstEquation * currentXCandidate) + (yNumberForFirstEquation *currentYCandidate) + (zNumberForFirstEquation * currentZCandidate) == firstEquationAnswer)
		{
			if ((xNumberForSecondEquation * currentXCandidate) + (yNumberForSecondEquation *currentYCandidate) + (zNumberForSecondEquation * currentZCandidate) == secondEquationAnswer)
			{
				if ((xNumberForThirdEquation * currentXCandidate) + (yNumberForThirdEquation *currentYCandidate) + (zNumberForThirdEquation * currentZCandidate) == thirdEquationAnswer)
				{
					solved = true;
					std::cout << "Solution found. X = " << currentXCandidate << " Y = " << currentYCandidate << " Z = " << currentZCandidate << std::endl << std::endl;
				}
			}
		}

		//rules for iteration
		if (currentZCandidate == roof)
		{
			currentZCandidate = floor;
			iterateY = true;
		}
		else
		{
			iterateZ = true;
		}
		if (currentYCandidate == roof)
		{
			currentYCandidate = floor;
			iterateX = true;
		}
		if (currentXCandidate == roof)
		{
			solved = true;
			std::cout << "Error, no solution found.";
		}

	}

	system("pause");
}