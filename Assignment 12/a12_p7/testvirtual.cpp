/*
   CH-230-A
   a12 p7.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/


#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

const int num_obj = 25;

int main () {
    Area *list[num_obj];
    
    char col[4][11] = {"RED", "BLACK", "VIOLET", "BLUE"};
    int a, c, b, d, counting = 0;

    srand(static_cast<unsigned int>(time(0)));

    // Entering the while loop
	while (counting < num_obj) 
	{
        a = (rand() % 4); // four colors
        b = (rand() % 4); // four classes 
        c = (rand() % 96) + 5; // number from 5 to 100
        d = (rand() % 96) + 5; 
    
    // RING
	if (b==0)
    {
        if (c>=d)
        {
            Ring fig1(col[a], c, d);
            list[counting] = &fig1;
            // Print the color
            cout << "\nThe color of RING is ";
            list[counting]->getColor();
            // Print the perimeter
            cout << "\nThe perimeter of RING is " << list[counting]->
                                              calcPerimeter() << endl;
            // Print the area
            cout << "\nThe area of RING is " << list[counting]->
                                             calcArea() << endl;
        }
        if(c<d)
        {
            Ring fig1(col[a], d, c);
            list[counting] = &fig1;
            cout << "\nThe color of RING is ";
            list[counting]->getColor();
            cout << "\nThe perimeter of RING is " << list[counting]->
                                             calcPerimeter() << endl;
            cout << "\nThe area of RING is " << list[counting]->
                                             calcArea() << endl;
        }

	}
    // CIRCLE
	if (b==1)
    {
        Circle fig2(col[a], c);
        list[counting] = &fig2;
        cout << "\nThe color of CIRCLE is "; 
        list[counting]->getColor();
        cout << "\nThe perimeter of CIRCLE is " << list[counting]->
                                           calcPerimeter() << endl; 
        cout << "\nThe area of CIRCLE is " << list[counting]->
                                           calcArea() << endl;
	}
    // RECTANGLE
	if (b==2)
    {
	    Rectangle fig3(col[a], c, d);
        list[counting] = &fig3;
        cout << "\nThe color of RECTANGLE is ";
        list[counting]->getColor();
        cout << "\nThe perimeter of RECTANGLE is " << list[counting]->
                                              calcPerimeter() << endl;
        cout << "\nThe area of RECTANGLE is " << list[counting]->
                                              calcArea() << endl;
	}
    // SQUARE
	if (b==3)
    {
	    Square fig4(col[a], c);
        list[counting] = &fig4;
        cout << "\nThe color of SQUARE is ";
        list[counting]->getColor();
        cout << "\nThe perimeter of SQUARE is " << list[counting]->
                                           calcPerimeter() << endl;
        cout << "\nThe area of SQUARE is " << list[counting]->
                                           calcArea() << endl;
	}
	cout << endl << endl;
	counting++;
	}

	return 0;
}