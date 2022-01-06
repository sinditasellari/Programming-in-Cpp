/*
   CH-230-A
   a11 p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u;
    u.run();
    u.speed();

    cout << "\nCreating a Monster.\n";
    Monster m;
    m.run();
    m.jump();

    return 0;
} 