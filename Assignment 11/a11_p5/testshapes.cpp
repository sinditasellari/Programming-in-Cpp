/*
   CH-230-A
   a11 p5.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main (int argc, char** argv)
{
  // 3 instances
  Circle circle1("Circle", 0, 0, 10);
  Rectangle rectangle1("Rectangle", 0, 0, 1, 6);
  Square square1("Square", 0, 0, 5.5);

  // Printing the names and the information
  circle1.printName();
  cout << "The perimeter is "<< circle1.perimeter() << endl << 
  "The area is " << circle1.area() << endl << endl;
  rectangle1.printName();
  cout << "The perimeter is "<< rectangle1.perimeter() << endl << 
  "The area is " << rectangle1.area() << endl << endl;
  square1.printName();
  cout << "The perimeter is "<< square1.perimeter() << endl << 
  "The area is " << square1.area() << endl;

  return 0;
}