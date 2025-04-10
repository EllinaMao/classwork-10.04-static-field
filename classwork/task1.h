#pragma once
#include <iostream>

using namespace std;

class AreaCalculator {

private:

	static int count; 

public:

	
	~AreaCalculator();


	static double triangleArea(double base, double height);

	static double rectangleArea(double length, double width);

	static double squareArea(double side);

	static double rhombusArea(double d1, double d2);


	static int getCount();
};