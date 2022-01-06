/*
   CH-230-A
   a12 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a(4, 2);
    Fraction b(17, 11);
    Fraction c(5);
    Fraction x, y; // two fractions
    
    cout << a << endl << b << endl << c << endl;
 
    cout << endl << "The two fractions are:" << endl;
    cin >> x;
    cin >> y;
    cout << "Division: " << x/y << endl;
    cout << "Multiplication: " << x*y << endl;
}