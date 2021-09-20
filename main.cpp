#include <iostream>
#include "box.h"
#include "checkerboard.h"
using std::cout;
using std::endl;
void printBox(int width, int height);
void printCheckers(int width, int height);
int main()
{
	printBox(4, 5);
	printBox(6, 7);
	printBox(9, 10);
	printCheckers(15, 10);
	printCheckers(11, 6);
	return 0;
}
void printCheckers(int width, int height)
{
	cout << "Checkerboard with width " << width << " and height " << height << ": " << endl;
	cout << printCheckerBoard(width, height);
	cout << "-----------------------------------------------------------------------" << endl;
}
void printBox(int width, int height)
{
	cout << "Box with width " << width << " and height " << height << ": " << endl;
	cout << box(width, height) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
