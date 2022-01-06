/*
   CH-230-A
   a10.p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>

using namespace std;

// Class declaration
class City {
        private:
                string name;
                int inhabitants;
                string mayor;
                double area;

        public:
                // setter methods
                void setName(string name1);
                void setInhabitants(int inhabitants1);
                void setMayor(string mayor1);
                void setArea(double area1);
                // getter methods
                string getName();
                int getInhabitants();
                string getMayor();
                double getArea();

                void print_info();
};