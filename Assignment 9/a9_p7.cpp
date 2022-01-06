/*
   CH-230-A
   a9 p7.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

void swapping (int &a , int &b); // swap ints
void swapping (float &x, float &y); // swap floats
void swapping (const char* &str1, const char* &str2);  // swap char pointers

int main (void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping (a, b);
    swapping (x, y);
    swapping (str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}

void swapping (int &a , int &b)
{
    // call-by-reference
    int i = a;
    a = b;
    b = i;
}

void swapping (float &x, float &y)
{
    // call-by-reference
    float i = x;
    x = y;
    y = i;
}

void swapping (const char* &str1, const char* &str2)
{
    // call-by-reference
    const char *i = str1;
    str1 = str2;
    str2 = i;
}

