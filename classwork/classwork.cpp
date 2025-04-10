/*
������� 1
�������� ����� ��� �������� ������� �������������� �����. ����� ������ ������������� ���������������� ��� �������� ������� ������������ �� ������ ��������, ������� ��������������, ������� ��������, ������� �����. �������-����� ��� �������� ������� ������ ���� ����������� � ������� ����������� �������-������. ����� ����� ������ ������� ���������� ��������� ������� � ���������� ��� �������� � ������� ����������� �������-�����.
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
	