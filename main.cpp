#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
using std::cout;
using std::endl;
void printBox(int width, int height);
void printCheckers(int width, int height);
void printCross(int d);
void printLowerHalf(int d);
void printUpperHalf(int d);
void printTrapezoid(int width, int height);
int main()
{
	printBox(4, 5);
	printBox(6, 7);
	printBox(9, 10);
	printCheckers(15, 10);
	printCheckers(11, 6);
	printCross(5);
	printCross(4);
	printLowerHalf(10);
	printLowerHalf(5);
	printUpperHalf(5);
	printUpperHalf(10);
	printTrapezoid(12, 5);
	printTrapezoid(5, 3);
	printTrapezoid(12, 7);
	return 0;
}
void printTrapezoid(int width, int height)
{
	cout << "Trapezoid with a width of " << width << " and a height of " << height << endl;
	cout << trapezoid(width, height) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
void printUpperHalf(int d)
{
	cout << "Upper half with dimension " << d << endl;
	cout << upperhalf(d) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
void printLowerHalf(int d)
{
	cout << "Lower half with dimension " << d << endl;
	cout << lowerhalf(d) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
void printCross(int d)
{
	cout << "Cross with dimension " << d << endl;
	cout << cross(d) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
void printCheckers(int width, int height)
{
	cout << "Checkerboard with width " << width << " and height " << height << ": " << endl;
	cout << printCheckerBoard(width, height) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
void printBox(int width, int height)
{
	cout << "Box with width " << width << " and height " << height << ": " << endl;
	cout << box(width, height) << endl;
	cout << "-----------------------------------------------------------------------" << endl;
}
