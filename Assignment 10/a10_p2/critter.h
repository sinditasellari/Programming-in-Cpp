/*
   CH-230-A
   a10.p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    int stress;
    double weight;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setStress(int newstress); // added
    void setWeight(double newweight); // added
	// getter method
	int getHunger();
    int getStress();
    double getWeight();
    // service method
	void print();
};