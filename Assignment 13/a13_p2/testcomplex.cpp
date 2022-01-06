/*
   CH-230-A
   a13 p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Complex.h"

using namespace std;

int main () {
    // 2 complex numbers
    Complex com_num1, com_num2;
    
    // First input
    ifstream first;
    first.open("in1.txt", ios::binary|ios::in);
    if (!first.is_open())
    { 
       cout << "Error!!!" << endl;
       exit(1);
    }

    // Second input
    ifstream second;
    second.open("in2.txt", ios::binary|ios::in);
    if (!second.is_open())
    {
        cout << "Error!!!" << endl;
       exit(1);
    }
   
    first >> com_num1;
    second >> com_num2;

    Complex com_num3 = com_num1 + com_num2; // sum
    Complex com_num4 = com_num1 - com_num2; // difference
    Complex com_num5 = com_num1 * com_num2; // product

    // Print on the screen
    cout << "Their sum: " << com_num3;
    cout << "Their difference: " << com_num4;
    cout << "Their product: " << com_num5;

    // Output file
    ofstream end;
    end.open("output.txt", ios::binary|ios::in);
    if (!end.is_open())
    {
        cout << "Error!!!" << endl;
       exit(1);
    }
    
    end << "Their sum: " << com_num3;
    end << "Their difference: " << com_num4;
    end << "Their product: " << com_num5;

    // Close the files
    first.close();
    second.close();
    end.close();
    return 0;
    
}