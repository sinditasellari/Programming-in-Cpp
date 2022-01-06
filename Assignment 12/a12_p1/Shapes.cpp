/*
   CH-230-A
   a12.p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

// Hexagon class

void Hexagon::setHexSide(double hex_side1)
{
	hex_side = hex_side1;
}

void Hexagon::setHexColor(const string& hex_color1)
{
	hex_color = hex_color1;
}

double Hexagon::getHexSide() { return hex_side; }

string Hexagon::getHexColor() { return hex_color; }

// Constructors
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, 
double hex_side1, const string& hex_color1) : RegularPolygon(n, nx, ny, nl)
{
        hex_side = hex_side1;
        hex_color = hex_color1;
}

Hexagon::Hexagon(const Hexagon& a): 
RegularPolygon(a.name, a.x, a.y, a.EdgesNumber)
{
    hex_side = a.hex_side;
	hex_color = a.hex_color;
}

Hexagon::~Hexagon() {} // destructor

// Compute the perimeter and the area
double Hexagon::HexPerimeter() 
{
	return hex_side * 6;
}

double Hexagon::HexArea() 
{
	return 3 * sqrt(3) * hex_side * hex_side / 2;
}