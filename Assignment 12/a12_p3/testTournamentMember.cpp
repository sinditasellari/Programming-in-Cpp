/*
   CH-230-A
   a12 p3.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main () {
    // Create three players with different properties
    Player p1("Ramiro", "Sanchez", "2000-05-09", "brown", "black", 5, "striker", 26, "left");
    Player p2("Tim", "Anthony", "1997-08-04", "blue", "brown", 18, "midfielder", 5, "right");
    Player p3("Arnold", "Bond", "1995-04-27", "green", "blond", 1, "goalkeeper", 0, "left");

    // Set the location to Hamburg
    TournamentMember::change("Hamburg");
    
    // Print the players data
    cout << endl << "Player 1:" << endl;
    p1.more_goals(); 
    p1.print_info();
    p1.print_other();
    
    cout << "Player 2:" << endl;
    p1.more_goals();
    p2.print_info();
    p2.print_other();
    
    cout << "Player 3:" << endl;
    p3.print_info();
    p3.print_other();
    cout << endl;

    return 0;
}