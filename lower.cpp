
#include <iostream>
#include "lower.h"
std::string lowerhalf(int d)
{
	std::string l = "";
	for (int i = 1; i <= d; i++)
	{
		for (int j = 0; j < i; j++)
			l += "*";
		l += i < d ? "\n" : "";
	}
	return l;
}
