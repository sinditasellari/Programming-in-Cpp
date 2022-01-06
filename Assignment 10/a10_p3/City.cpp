/*
   CH-230-A
   a10.p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

// set methods 
void City::setName(string name1)
{
        name = name1;
}

void City::setInhabitants(int inhabitants1)
{
        inhabitants = inhabitants1;
}

void City::setMayor(string mayor1)
{
        mayor = mayor1;
}

void City::setArea(double area1)
{
        area = area1;
}

// Get methods
string City::getName()
{
        return name;
}

int City::getInhabitants()
{
        return inhabitants;
}

string City::getMayor()
{
        return mayor;
}

double City::getArea()
{
        return area;
}

// Printing
void City::print_info ()
{
        cout << "The name of the city is " << name << ". There are " 
        << inhabitants << " inhabitants. The mayor of the city is " 
        << mayor << ". The city has an area of " << area << " km2." << endl;
}