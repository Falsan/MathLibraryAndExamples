#pragma once

#include <iostream>
#include <vector>
#include <deque>

class Toolbox
{
public:
	Toolbox();
	~Toolbox();

	static void ClearScreen();

	template <typename T>
	static void TemplateFunctionExample(T);

	static void LambdaSortFunctionExample(float numberOne, float numberTwo);

	static std::vector<int> AddNumbersToVectorExample(int arrayOfInts [10]);
	static std::deque<int> AddNumbersToDequeExample(int arrayOfInts[10]);

	static void BitMaskAssigner(unsigned short component);

private:

};