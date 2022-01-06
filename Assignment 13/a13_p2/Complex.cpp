/*
   CH-230-A
   a13 p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
    realpart=0;
    imaginarypart=0;
}

Complex::Complex(int r, int i): realpart(r), imaginarypart(i) {}

Complex::Complex(const Complex& c):
realpart(c.realpart), imaginarypart(c.imaginarypart){}

Complex::~Complex(){}

void Complex::setReal(int r)
{
    realpart=r;
}

void Complex::setImag(int i)
{
    imaginarypart=i;
}

int Complex::getReal()
{
    return realpart;
}

int Complex::getImag()
{
    return imaginarypart;
}

// Addition
Complex Complex::operator+(Complex& c)
{
   return Complex(realpart + c.realpart, imaginarypart+c.imaginarypart); 
}

// Subtraction
Complex Complex::operator-(Complex& c)
{
    return Complex(c.realpart - realpart, c.imaginarypart - imaginarypart);
}

// Multiplication
Complex Complex::operator*(Complex& c)
{
    int real = realpart * c.realpart - imaginarypart * c.imaginarypart;
    int imag = realpart * c.imaginarypart + imaginarypart * c.realpart;
    return Complex(real, imag);
}

// Equality
Complex Complex::operator=(Complex& c)
{
    realpart = c.realpart;
    imaginarypart = c.imaginarypart;
    return c;
}

ostream& operator<<(ostream& os, const Complex& c)
{
    if (c.imaginarypart) 
    {
        os << noshowpos << c.realpart 
        << showpos << c.imaginarypart << "i" << endl;
    } else 
    {
        os << noshowpos << c.realpart << endl;
    }
    return os;
}

istream& operator>>(istream& is, Complex& c)
{
    is >> c.realpart >> c.imaginarypart;
    return is;
}

