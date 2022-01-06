/*
   CH-230-A
   a12.p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main () {
	// Creating 3 hexagons 
	Hexagon hex1 ("Hexagon 1", 0, 0, 6, 9, "blue");
    Hexagon hex2 ("Hexagon 2", 0, 0, 6, 15, "green");
    Hexagon hex3 (hex2); 
    
    // Printing their data
	hex1.printName();
	cout << "Its side is " << hex1.getHexSide() << endl;
	cout << "Its color is " << hex1.getHexColor() << endl;
    cout << "Its perimeter is " << hex1.HexPerimeter() << endl;
	cout << "Its area is " << hex1.HexArea() << endl << endl;

	hex2.printName();
	cout << "Its side is " << hex2.getHexSide() << endl;
	cout << "Its color is " << hex2.getHexColor() << endl;
    cout << "Its perimeter is " << hex2.HexPerimeter() << endl;
	cout << "Its area is " << hex2.HexArea() << endl << endl;

    cout << "Hexagon 3 (copy of hexagon 2)" << endl;
	cout << "Its side is " << hex3.getHexSide() << endl;
	cout << "Its color is " << hex3.getHexColor() << endl;
    cout << "Its perimeter is " << hex3.HexPerimeter() << endl;
	cout << "Its area is " << hex3.HexArea() << endl << endl;
	
    return 0;
}