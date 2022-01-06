/*
   CH-230-A
   a10.p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

int main () {
    // First instance
    Critter emptyInstance;
    emptyInstance.setHunger(2);
    emptyInstance.print_info();

    // Second instance
    Critter onlyName("Erion");
    onlyName.setHunger(2);
    onlyName.print_info();

    // Using third constructor in two ways 

    // Third instance
    Critter all("Stacy", 2 , 9, 25);
    all.print_info();

    // Fourth instance
    Critter noHeight("Hanna", 2, 6);
    noHeight.print_info();

}