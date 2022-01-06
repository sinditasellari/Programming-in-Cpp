/*
   CH-230-A
   a10.p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// Setter methods
void Critter::setName(string& newname)
{
	name = newname;
}

void Critter::setHunger(int newhunger)
{
	hunger = newhunger;
}

void Critter::setStress(int newstress)
{
	stress = newstress;
}

void Critter::setWeight(double newweight)
{
    weight = newweight;
}

// Printing
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << 
	". My stress level is " << stress << ". My weight is " 
	<< weight << " kilogram." << endl;
}

// Getter
int Critter::getHunger()
{
	return hunger;
}

int Critter::getStress()
{
	return stress;
}

double Critter::getWeight()
{
	return weight;
}