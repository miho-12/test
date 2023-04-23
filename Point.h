#pragma once
#include <string>
#include <vector>

class Point
{
public:
	Point();
	Point(double x, double y);

	std::string to_string();

	void moveBy(double x, double y);

	static Point massOfPoints(const std::vector<Point>& points);

private:
	double x;
	double y;
	static int counter;
	int id;
};