/*
   CH-230-A
   a13 p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
    private:
        int realpart; 
        int imaginarypart;  

    public:
        // Constructors
        Complex();
        Complex(int r, int i);
        Complex(const Complex& c);

        // Destructor
        ~Complex();
        
        // Setter Methods
        void setReal(int);
        void setImag(int);

        // Getter Methods
        int getReal();
        int getImag();

        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
        Complex operator=(Complex&);
        friend std::ostream& operator<<(ostream&, const Complex&);
        friend std::istream& operator>>(istream&, Complex&);
};
#endif 