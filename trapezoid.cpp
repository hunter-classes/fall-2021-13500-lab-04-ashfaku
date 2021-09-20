#include <iostream>
#include "trapezoid.h"
std::string trapezoid(int width, int height)
{
	std::string l = "";
	for (int i = 0; i < height; i++)
	{
		for (int s = 0; s < i; s++)
			l += " ";
		for (int j = 0; j < (width - i*2); j++)
			l += "*";
		if (width - i*2 <= 0)
			return "Impossible Shape!";
		l += i < height - 1 ? "\n" : "";
	}
	return l;
}
