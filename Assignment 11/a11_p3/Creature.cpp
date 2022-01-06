/*
   CH-230-A
   a11 p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

// Constructor
Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard is here.\n";
}  

// Method
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Destructor
Wizard::~Wizard()
{
    cout << "Wizard is leaving. Bye Bye!\n";
}

// Constructor
Unicorn::Unicorn() : time(5)
{
    cout << "Unicorn is here.\n";
}

// Method
void Unicorn::speed() const
{
    cout << "Her speed is " << (distance/time) << " meters per second.\n";
}

// Destructor
Unicorn::~Unicorn()
{
    cout << "Unicorn is leaving. Bye bye!\n";
}

// Constructor
Monster::Monster() : jumps(30)
{
    cout << "Monster is here.\n";
}

// Method
void Monster::jump() const
{
    cout << "Now the monster is jumping for " << distance << 
    " meters. He's making " << (jumps/distance) << " jumps per meter.\n";
}

// Destructor
Monster::~Monster()
{
    cout << "\nMonster is leaving. Bye bye!\n";
}