#include "task1.h"
int AreaCalculator::count = 0;

AreaCalculator::AreaCalculator()
{
	x = 0;
	y = 0;
}

AreaCalculator::AreaCalculator(double x1, double y1)
{
	x = x1;
	y = y1;
}

AreaCalculator::~AreaCalculator()
{
	count--;
}


double AreaCalculator::triangleArea(double base, double height)
{
	count++;
	return 0.5 * base * height;
}

double AreaCalculator::rectangleArea(double length, double width)
{	count++;
	return length * width;
}

double AreaCalculator::squareArea(double side)
{
	count++;
	return side * side;
}

double AreaCalculator::rhombusArea(double d1, double d2)
{
	count++;
	return 0.5 * d1 * d2;
}

int AreaCalculator::getCount()
{
	return count;
}