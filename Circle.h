#pragma once
#include "Point.h"
#include <iostream>


class Circle
{
public:
	Circle(double x, double y, double radius);

	Circle(Circle& c);

	double get_area();

	Point* get_point();

	std::string to_string();

	~Circle();



private:
	Point* mid;
	double radius;
};