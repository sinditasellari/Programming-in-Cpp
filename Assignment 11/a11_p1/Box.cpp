/*
   CH-230-A
   a11 p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include "Box.h"

Box::Box() {}  // Default constructor 

Box::~Box() {} // Destructor

Box::Box(double vh, double vw, double vd)
{
    h = vh;
    w = vw;
    d = vd;
}

Box::Box(const Box& x)
{
    h = x.h;
    w = x.w;
    d = x.d;
}

void Box::setHeightValue(double h1)
{
    h = h1;
}

void Box::setWidthValue(double w1)
{
    w = w1;
}

void Box::setDepthValue(double d1)
{
    d = d1;
}

double Box::getHeightValue()
{
    return h;
}

double Box::getWidthValue()
{
    return w;
}

double Box::getDepthValue()
{
    return d;
}

// The computation of the volume of boxes
double Box::box_volume()
{
    return h * w * d;
}