/*
   CH-230-A
   a12 p2.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

// Creating a program which uses all the constructors
int main (int argc, char**argv) {
    cout << "The member" << endl;
    TournamentMember member;
    member.setFirst("Sindi");
    member.setLast("Tasellari");
    member.setBirth("2001-07-06");
    member.setEyes("blue");
    member.setHair("dark brown");
    member.print_info();
    // Using change method
    cout << "Changing location of the member" << endl;
    TournamentMember member1("Sindi", "Tasellari", "2001-07-06", 
                             "blue", "dark brown"); 
    member1.change("Germany");
    member1.print_info();
    // Using copy constructor
    cout << "Creating a copy of the member" << endl;
    TournamentMember copymember(member1); 
    copymember.print_info();

    return 0;
}