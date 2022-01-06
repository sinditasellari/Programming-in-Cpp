/*
   CH-230-A
   a10.p8.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include<iostream>
#include "Complex.h"

Complex::Complex()
{
    realpart=0;
    imaginarypart=0;
}

Complex::Complex(float r, float i): realpart(r), imaginarypart(i) {}

Complex::Complex(const Complex& c):
realpart(c.realpart), imaginarypart(c.imaginarypart){}

Complex::~Complex(){}
 
 void Complex::setReal(float r)
 {
     realpart=r;
 }
 
 void Complex::setImag(float i)
 {
    imaginarypart=i;
 }

float Complex::getReal()
{
    return realpart;
}

float Complex::getImag(){
    return imaginarypart;
}

// Conjugate, adding, subtracting and multiplying
Complex Complex::conj()
{
    return Complex(realpart, imaginarypart * -1);
}

Complex Complex::add(Complex& c)
{
    return Complex(realpart + c.realpart, imaginarypart+c.imaginarypart);
}

Complex Complex::subt(Complex& c)
{
    return Complex(c.realpart - realpart, c.imaginarypart - imaginarypart);
}

Complex Complex::multi(Complex& c)
{
    float real = realpart * c.realpart - imaginarypart * c.imaginarypart;
    float imag = realpart * c.imaginarypart + imaginarypart * c.realpart;
    return Complex(real, imag);
}

void Complex::print_info ()
{
    if (imaginarypart)
    {
        cout << noshowpos << realpart << showpos << imaginarypart << "i"<< endl;
    }
    else
    {
        cout << noshowpos << realpart << showpos << endl;
    }
}