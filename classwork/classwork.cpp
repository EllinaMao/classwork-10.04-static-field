/*
Задание 1
Создайте класс для подсчета площади геометрических фигур. Класс должен предоставлять функциональность для подсчета площади треугольника по разным формулам, площади прямоугольника, площади квадрата, площади ромба. Функции-члены для подсчета площади должны быть реализованы с помощью статических функций-членов. Также класс должен считать количество подсчетов площади и возвращать это значение с помощью статической функции-члена.
*/

#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
    double a = 2.1;
    double b = 5.7;

	double result = 0;

    result = AreaCalculator::triangleArea(a, b);
    cout << "triangle area: " << result << endl;

    result = AreaCalculator::rectangleArea(a, b);
    cout<< "rectangle area: " << result << endl;

    result = AreaCalculator::rhombusArea(a, b);
    cout << "rhombus area: " << result << endl;

    result = AreaCalculator::squareArea(a);
    cout << "square area: " << result << endl;

    int count = AreaCalculator::getCount();
    cout<< "count: " << count << endl;





    return 0;
}
	