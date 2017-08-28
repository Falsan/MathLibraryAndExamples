#include "CylinderSolver.h"

CylinderSolver::CylinderSolver()
{

}

CylinderSolver::~CylinderSolver()
{

}

void CylinderSolver::RunSolver()
{
	int radius;
	int pi = 3.141;
	int height;

	int surfaceArea;

	std::cout << "Please enter a height for your cylinder.";
	std::cin >> height;

	std::cout << "Please enter a radius for your cylinder.";
	std::cin >> radius;

	surfaceArea = 2 * (pi * radius * height) + 2 * (pi * radius * 2);

	std::cout << "Surface area is: " << surfaceArea;
	std::cout << std::endl;
	system("pause");

}