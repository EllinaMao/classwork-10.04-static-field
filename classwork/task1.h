#pragma once
#include <iostream>

using namespace std;

class AreaCalculator {

private:

	double x;
	double y;
	static int count; 

public:

	AreaCalculator();
	AreaCalculator(double x1, double y1);
	
	~AreaCalculator();


	static double triangleArea(double base, double height);

	static double rectangleArea(double length, double width);

	static double squareArea(double side);

	static double rhombusArea(double d1, double d2);


	static int getCount();
};