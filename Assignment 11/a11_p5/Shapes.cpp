/*
   CH-230-A
   a11 p5.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>
#include <cmath>
using namespace std;

// Shape class
Shape::Shape(const string &n) : name(n) {}

// empty constructor
Shape::Shape() : name("unknown") {}

// copy constructor
Shape::Shape(const Shape &s) { name = s.name; }

void Shape::printName() const { cout << name << endl; }

// setter
void Shape::setName(string &name1) { name = name1; }

// getter
string Shape::getName() { return name; }



// CenteredShape class
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
  x = nx;
  y = ny;
}

CenteredShape::CenteredShape(): Shape()
{
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& other)
{
    x = other.x;
    y = other.y;
}

void CenteredShape::setX(double x1) { x = x1; }

void CenteredShape::setY(double y1) { y = y1; }

double CenteredShape::getX() { return x; }

double CenteredShape::getY() { return y; }



// Regular Polygon class
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
    EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const RegularPolygon& regular)
{
    EdgesNumber = regular.EdgesNumber;
}

void RegularPolygon::setEdges(int edges1) { EdgesNumber = edges1; }

int RegularPolygon::getEdges() { return EdgesNumber; }



// Circle class
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}

Circle::Circle() : CenteredShape() 
{
    Radius = 0;
}

Circle::Circle(const Circle& cir)
{
    Radius = cir.Radius;
}

void Circle::setRadius(double radius1) { Radius = radius1; }

double Circle::getRadius() { return Radius; }

double Circle::perimeter()
{
    return 2 * M_PI * Radius;
}

double Circle::area()
{
    return M_PI * Radius * Radius;
}



// Rectangle class
Rectangle::Rectangle(const string& n, double nx, 
double ny, double nwidth, double nheight) :
    RegularPolygon(n,nx,ny,4)
{
    RecWidth = nwidth;
    RecHeight = nheight;
}

Rectangle::Rectangle() : RegularPolygon()
{
    RecWidth = 0;
    RecHeight = 0;
}

Rectangle::Rectangle(const Rectangle& other)
{
    RecWidth = other.RecWidth;
    RecHeight = other.RecHeight;
}

void Rectangle::setRecWidth(double recwidth1) { RecWidth = recwidth1; }

void Rectangle::setRecHeight(double recheight1) { RecHeight = recheight1; }

double Rectangle::getRecWidth(){ return RecWidth; }

double Rectangle::getRecHeight(){ return RecHeight; }

double Rectangle::perimeter()
{
    return (2*RecWidth) + (2*RecHeight);
}

double Rectangle::area()
{
    return RecWidth * RecHeight;
}



// Square class
Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle(n, nx, ny, nside, nside)
{
    Side = nside;
}

Square::Square()
{
    Side = 0;
}

Square::Square(const Square& other)
{
    Side = other.Side;
}

void Square::setSide(double side1) { Side = side1; }

double Square::getSide() { return Side; }

double Square::perimeter()
{
    return Side * 4;
}

double Square::area()
{
    return Side * Side;
}