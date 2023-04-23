#include <iostream>
#include <string>
#include "Point.h"
#include "Circle.h"

Circle::Circle(double x, double y, double radius) : radius(radius)
{
	mid = new Point(x, y);
}

Circle::Circle(Circle& c) : radius(c.radius)
{
	mid = new Point(*(c.mid));//or getters
}

double Circle::get_area()
{
	return 3.14 * radius * radius;

}

Point* Circle::get_point()
{
	return mid;
}

std::string Circle::to_string()
{
	return mid->to_string() + "r=" + std::to_string(radius);
}

Circle::~Circle()
{
	delete mid;
}