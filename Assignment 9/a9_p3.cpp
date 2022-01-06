/*
   CH-230-A
   a9 p3.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* Finding the absolute value of the number */
float find_abs (float n)
{
    if (n>=0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

int main () {
    float number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Its absolute value is " << find_abs(number) << endl;
    return 0;
}