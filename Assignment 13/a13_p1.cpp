/*
   CH-230-A
   a13 p1.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    string original;
    string copy;
    string newl;

    getline (cin, original); // input
    ifstream first (original.c_str());
    
    // The copy of the file
    copy = original + "_copy.txt";
    ofstream second (copy.c_str());

    if (first && second)
    {
        do 
        {
            getline(first, newl);
            second << newl;
            second << endl;
        }
        while (first.eof() != true);
        cout << "It is ready!";
    }
    else 
    {
        // If the file cannot be opened
        cout << "Cannot copy!" <<  endl;
    }

    first.close();
    second.close();
}