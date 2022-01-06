/*
   CH-230-A
   a10.p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Critter
{
    private:
        string name;
        int hunger;
        int boredom;
        double height;

    public: 
        // 3 constructors
        Critter();
        Critter(string name1);
        Critter(string name1, int hunger1, int boredom1, double height1 = 10);

        void setHunger(int hunger1); //setter
        int getHunger(); //getter
        void print_info(); 
};
