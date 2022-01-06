/*
   CH-230-A
   a9 p2.cpp
   sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main () {
    int idx = 0;
    int n;
    cin >> n; // Getting input
    double x;
    cin >> x; // Getting input
    string s;
    cin >> s; // Getting input

    // The loop
    while (idx<n)
    {
        cout << s;
        cout << ":";
        cout << x << endl;
        idx++;
    }

    return 0;
}