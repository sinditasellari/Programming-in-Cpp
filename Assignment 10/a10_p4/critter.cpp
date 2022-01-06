/*
   CH-230-A
   a10.p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// The constructors
Critter::Critter()
{
        cout << "First constructor called (empty)" <<endl;
        name = "default_critter";
        hunger = 0;
        boredom = 0;
        height = 5;
}

Critter::Critter(string name1)
{
        cout << "Second constructor called (name specified)" << endl;
        name = name1;
        hunger = 0;
        boredom = 0;
        height = 5;
}

Critter::Critter(string name1, int hunger1, int boredom1, double height1)
{
        cout << "Third constructor called (all parameters)" << endl;
        name = name1;
        hunger = hunger1;
        boredom = boredom1;
        height = height1;
}

void Critter::setHunger(int hunger1)
{
    hunger = hunger1;
}

int Critter::getHunger()
{
    return hunger;
}

/* Printing the results */
void Critter::print_info()
{
    cout << "Your name: " << name << endl << "Your hunger: " << hunger << endl 
    << "Your boredom: " << boredom << endl << "Your height: " << height << endl;
}