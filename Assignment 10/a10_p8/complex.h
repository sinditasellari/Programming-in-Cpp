/*
   CH-230-A
   a10.p8.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Complex {
    private:
        float realpart;
        float imaginarypart;

    public:
        // Constructors
        Complex();
        Complex(float r, float i = 0);
        Complex(const Complex& c);
        
        // Destructor
        ~Complex();

        // Setter Methods
        void setReal(float);
        void setImag(float);

        // Getter Methods
        float getReal();
        float getImag();

        // Conjugate, adding, subtracting and multiplying
        Complex conj();
        Complex add(Complex&);
        Complex subt(Complex&);
        Complex multi(Complex&);

        // Printing method
        void print_info ();
};