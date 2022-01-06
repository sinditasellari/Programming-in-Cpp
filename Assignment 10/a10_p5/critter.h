/*
   CH-230-A
   a10.p5.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/
 
#include <iostream>
using namespace std;
 
class Critter
{
    private:
        string name;
        double hunger;
        int boredom;
        double height;
 
    public: 
        // 3 constructors
        Critter();
        Critter(string name1);
        Critter(string name1, int hunger1, int boredom1, double height1 = 10);
 
        void setHunger(int hunger1); //setter
        double getHunger(); //getter
        void print_info(); 

        // Methods for conversion
        double convert1(int); // convert from integers to doubles
        int convert2(double); // convert from doubles to integers
};