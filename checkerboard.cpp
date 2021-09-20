#include <iostream>
#include "checkerboard.h"

bool isEven(int x)
{
	return x % 2 == 0;
}
std::string printCheckerBoard(int width, int height)
{
	std::string board = "";
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			board += (isEven(i) ? isEven(j) ? "*" : " " : isEven(j) ? " " : "*");
		}
		board += "\n";
	}
	return board;
}

