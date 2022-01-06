/*
   CH-230-A
   a10.p8.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main () {
    double firstr, secondr, firsti, secondi;
    // Getting input
    cout << "Enter the real part of the first complex number: ";
    cin >> firstr;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> firsti;
    cout << "Enter the real part of the second complex number: ";
    cin >> secondr;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> secondi;

    Complex c1(firstr, firsti), c2(secondr,secondi), c3;
    c1.print_info();
    c2.print_info();
    
    /* Printing the results */
    cout << "Conjugate of first complex number: ";
    c3 = c1.conj();
    c3.print_info();
    cout << "Addition: ";
    c3 = c1.add(c2);
    c3.print_info();
    cout << "Subtraction: " ;
    c3 = c1.subt(c2);
    c3.print_info();
    cout << "Multiplication: " ;
    c3 = c1.multi(c2);
    c3.print_info();

}