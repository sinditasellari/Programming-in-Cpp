/*
   CH-230-A
   a12 p5.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main () {
    Fraction a, b;
    cout << "The two fractions are:" << endl;
    cin >> a;
    cin >> b;
    // Using the operator = for assigning
    Fraction c, d;
    c = a;
    cout << endl << "Fraction 1: " << c << endl;
    d = b;
    cout << "Fraction 2: " << d << endl;
    // Comparing the fractions
    if (a > b)
    {
		cout << "Fraction 1 is greater than fraction 2" << endl;
	} 
    else if (b > a)
    {
		cout << "Fraction 2 is greater than fraction 1" << endl;
	} 
    else 
    {
		cout << "Both fractions are equal"<< endl;
	}

    cout << "Division: " << a/b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Addition: " << a+b << endl;
    cout << "Subtraction: " << a-b << endl;
    return 0;
}