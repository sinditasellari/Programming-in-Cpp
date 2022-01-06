/*
   CH-230-A
   a11 p6.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main () {
    Vector v1,v2;
    int idx;
    int nr;
    cout << "Number of components: "; 
    cin >> nr; // get input
    // No. of components of each vector
    v1.setNrCom(nr);
    v2.setNrCom(nr);
    
    double *vec;
    // First vector
    cout << endl << "Components of first vector:" << endl;
    vec = new double[nr];
    for (idx=0; idx<nr; idx++)
    {
        cin >> vec[idx];
    }
    v1.setVecComponents(vec);
    cout << endl << "Vector 1: ";
    v1.print_info();
    // Second vector
    cout << endl << "Components of second vector:" << endl;
    for (idx=0; idx<nr; idx++)
    {
        cin >> vec[idx];
    }
    v2.setVecComponents(vec);
    cout << endl << "Vector 2: ";
    v2.print_info();
    
    delete []vec;

    cout << endl << "The addition vector: ";
    (v1.add(v2)).print_info();
    
    cout << "The difference vector: ";
    (v1.difference(v2)).print_info();

    cout << "The norm of second vector is ";
    cout << v2.norm() << endl;

    cout << "The scalar product of the two vectors is ";;
    cout << v1.sproduct(v2) << endl;
    
    return 0;
}