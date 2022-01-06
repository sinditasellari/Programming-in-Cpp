/*
   CH-230-A
   a10.p6.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/
 
#include <iostream>
#include "Critter.h"
 
using namespace std;

double Critter::convert1(int x)
{
        return double(x)/10;
}

int Critter::convert2(double x)
{
        return x*10;
}
 
// The constructors
Critter::Critter()
{
        cout << "First constructor called (empty)" <<endl;
        name = "default_critter";
        hunger = 0;
        boredom = 0;
        height = 5;
        thirst = convert1(hunger);
}
 
Critter::Critter(string name1)
{
        cout << "Second constructor called (name specified)" << endl;
        name = name1;
        hunger = 0;
        boredom = 0;
        height = 5;
        thirst = convert1(hunger);
}
 
Critter::Critter(string name1, int hunger1, int boredom1, double height1)
{
        cout << "Third constructor called (all parameters)" << endl;
        name = name1;
        hunger = convert1(hunger1);
        boredom = boredom1;
        height = height1;
        thirst = hunger;
}

// Added constructor
Critter::Critter(string name1, int hunger1, int boredom1, double height1, double thirst1)
{
        cout << "Fourth constructor called (thirst)" << endl;
        name = name1;
        hunger = convert1(hunger1);
        boredom = boredom1;
        height = height1;
        thirst = convert1(thirst1);
}
 
void Critter::setHunger(int hunger1)
{
    hunger = convert1(hunger1);
}
 
double Critter::getHunger()
{
    return convert2(hunger);
}
 
/* Printing the results */
void Critter::print_info()
{
    cout << "Your name: " << name << endl << "Your hunger: " << getHunger() << endl 
    << "Your boredom: " << boredom << endl << "Your height: " << height << endl
    << "Your thirst: " << thirst << endl;
}