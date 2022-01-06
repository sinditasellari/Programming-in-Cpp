#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double s) 
					: Rectangle(n,s,s)
{
	side = s;
}

Square::~Square() {}

double Square::calcArea() const
{
	std::cout << "calcArea of Square...";
	return Rectangle::calcArea();
}

double Square::calcPerimeter() const
{
	std::cout << "calcPerimeter of Square...";
	return Rectangle::calcPerimeter();
}