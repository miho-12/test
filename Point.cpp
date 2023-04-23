#include "Point.h"
#include <iostream>
#include <string>
#include <vector>

int Point::counter = 1;

Point::Point() : x(0), y(0), id(counter++) {}
Point::Point(double x, double y) : x(x), y(y), id(counter++) {}

std::string Point::to_string()
{
	return  "(" + std::to_string(x) + "," + std::to_string(y) + ")" + " id: " + std::to_string(id); //this->x?
}

void Point::moveBy(double x, double y)
{
	this->x += x;
	this->y += y;
}

 Point Point::massOfPoints(const std::vector<Point>& points)
{
	int sumX = 0;
	int sumY = 0;
	for (auto& point : points) //Point type
	{
		sumX += point.x;
		sumY += point.y;
	}

	return Point(sumX / points.size(), sumY / points.size());
	 //Visszatérni pointtal?
	


}