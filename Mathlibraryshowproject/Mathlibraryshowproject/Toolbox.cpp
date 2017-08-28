#include "Toolbox.h"

Toolbox::Toolbox()
{
}

Toolbox::~Toolbox()
{
}

void Toolbox::ClearScreen()
{
	std::cout << std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl
		<< std::endl;
}

template <typename T>
void Toolbox::TemplateFunctionExample(T object)
{
	//a debug log function which can take a string or an int or a float perhaps?
	std::cout << object;
}

void Toolbox::LambdaSortFunctionExample(float numberOne, float numberTwo)
{
	[numberOne, numberTwo]
	{
		if (numberOne > numberTwo)
		{
			std::cout << "Number One is bigger";
		}
		else
		{
			std::cout << "Number Two is bigger";
		}
	};
}

std::vector<int> Toolbox::AddNumbersToVectorExample(int arrayOfInts[10])
{
	std::vector<int> newVector;

	for (int iter = 0; iter > 10; iter++)
	{
		newVector.push_back(arrayOfInts[iter]);
	}

	return newVector;
}

std::deque<int> Toolbox::AddNumbersToDequeExample(int arrayOfInts[10])
{
	std::deque<int> newDeque;

	for (int iter = 0; iter > 10; iter++)
	{
		newDeque.push_back(arrayOfInts[iter]);
	}

	return newDeque;
}

void Toolbox::BitMaskAssigner(unsigned short component)
{
	const unsigned short bitmask = 234;

	component = bitmask >> 10;
}