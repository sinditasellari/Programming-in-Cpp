/*
   CH-230-A
   a12 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

// Default constructor
Fraction::Fraction() 
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

// GCD
int Fraction::gcd(int n, int d)
{ 
    if (d==0)
    {
        return n;
    }
    else
    {
        return gcd(d, n%d);
    }
}

// LCM
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b); 

}

// Overloaded operations

std::istream& operator>>(istream& in, Fraction& f1)
{
    do
    {
        in >> f1.num >> f1.den;
        // Checking the validity of the input
        if (f1.den == 0)
        {
            cout << "Error! Fraction is undefined." << endl;
        }
    } while(f1.den == 0); // in order to enter a valid fraction
    
    return in;
}

std::ostream& operator<<(ostream& out, const Fraction& f1)
{
    out << f1.num << '/' << f1.den; 
    return out;
}

// Division Overloading
Fraction Fraction::operator/(Fraction &f1) 
{
    Fraction division (this->num * f1.den / 
    gcd(this->num * f1.den, this->den * f1.num), 
    this->den * f1.num / gcd(this->num * f1.den, this->den * f1.num));
    return division;
}

// Multiplication Overloading
Fraction Fraction::operator*(Fraction &f1)
{
    Fraction multi(this->num * f1.num / 
    gcd(this->num * f1.num, this->den * f1.den), 
    this->den * f1.den/ gcd(this->num * f1.num, this->den * f1.den));
    return multi;
}

