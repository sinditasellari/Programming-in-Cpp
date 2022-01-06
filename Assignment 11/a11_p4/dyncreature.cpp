/*
   CH-230-A
   a11 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main () {
    string input;
    while (true)
    {
        // Ask for input
        cout << "The name of creature:" << endl;
        cin >> input;
        // When the input is the word "wizard"
        if (input=="wizard")
        {
            cout << "\nCreating a Wizard.\n";
            Wizard *w = new Wizard(); // dynamically created
            w->run();
            w->hover();
            delete w;
            cout << endl;
        }
        // When the input is the word "unicorn"
        else if (input=="unicorn")
        {
            cout << "\nCreating a Unicorn.\n";
            Unicorn *u = new Unicorn(); // dynamically created
            u->run();
            u->speed();
            delete u;
            cout << endl;
        }
        // When the input is the word "monster"
        else if (input=="monster")
        {
            cout << "\nCreating a Monster.\n";
            Monster *m = new Monster(); // dynamically created
            m->run();
            m->jump();
            delete m;
            cout << endl;
        }
        // When the input is the word "quit", the program stops
        else if (input=="quit")
        {
            break;
        }
        // When the input is another random word
        else
        {
            cout << "Error! Enter another creature.\n" << endl;
            continue;
        }
    }
    
    return 0;
}
