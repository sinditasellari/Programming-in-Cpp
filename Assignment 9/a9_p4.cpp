/*
   CH-230-A
   a9 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// Counting the number of occurrences of a character in a string
int mycount (string s1, char char1)
{
        unsigned int occur = 0, idx = 0;
        while (idx<s1.length())
        {
            if (s1[idx]==char1)
            {
                occur++;
            }
            idx++;
        }

        if (occur==0)
        {
                return 0;
        }
        return occur;
}

// Computing the difference between the second and first parameter
int mycount (int n1, int n2)
{
        return n2 - n1;
}

int main () {
        string str;
        char c;
        int x, y;

        getline(cin, str); // Enter a string
        cin >> c; // Enter a character
        cout << mycount(str, c) << endl; 
        cin >> x; // Enter a number
        cin >> y; // Enter another number
        cout << mycount(x, y) << endl; 

        return 0;
}