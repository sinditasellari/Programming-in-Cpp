/*
   CH-230-A
   a13 p6.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    // Add the value 8, 20 times
    for(int idx=0; idx<20; idx++)
    {
        v.push_back(8);
    }

    try
    {
       // Use at() method
       cout << v.at(21) << endl; 
    } catch (out_of_range& x)
    {
        // Call what() method
        cerr << x.what() << endl;
    }

    return 0;
}