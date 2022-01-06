/*
   CH-230-A
   a11 p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main () {
    double height, width, depth;
    int n, idx;
    cout << "Enter the number of boxes" << endl; // Getting input
    cin >> n;

    Box *box1 = new Box[2*n];

    // Getting input
    for (idx=0; idx<n; idx++)
    {
       // Height
       cout << "Enter the height of box " << idx+1 << endl;
       cin >> height;
       box1[idx].setHeightValue(height);
       // Width
       cout << "Enter the width of box " << idx+1 << endl;
       cin >> width;
       box1[idx].setWidthValue(width);
       // Depth
       cout << "Enter the depth of box " << idx+1 << endl;
       cin >> depth;
       box1[idx].setDepthValue(depth);
    }

    // Copying the first n boxes to the other boxes
    for (idx=n; idx<2*n; idx++)
    {
        box1[idx] = box1[idx-n];
    }
 
    for (idx=0; idx<2*n; idx++)
    {
        cout << "The volume of box " << idx+1 << ": " << box1[idx].box_volume() << endl;
    }

    delete [] box1; 
    return 0;
}