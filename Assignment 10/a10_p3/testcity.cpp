/*
   CH-230-A
   a10.p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main(int argc, char** argv ){
        City x,y,z; // three instances

        // The data is not accurate.
        x.setName("Bremen");
        x.setInhabitants(500000);
        x.setMayor("Jon Fischer");
        x.setArea(200);
        x.print_info();

        y.setName("Paris");
        y.setInhabitants(1000000);
        y.setMayor("Maria Beccera");
        y.setArea(350.5);
        y.print_info();

        z.setName("London");
        z.setInhabitants(5000000);
        z.setMayor("Elton Harris");
        z.setArea(700);
        z.print_info();

        return 0;
}