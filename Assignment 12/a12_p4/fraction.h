/*
   CH-230-A
   a12 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
using namespace std;

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);      // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                 // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1.
    // Overloaded operations
    friend ostream& operator<<(ostream&, const Fraction&);
    friend istream& operator>>(istream&, Fraction&);
    Fraction operator*(Fraction&);
    Fraction operator/(Fraction&);
};

#endif /* FRACTION_H_ */