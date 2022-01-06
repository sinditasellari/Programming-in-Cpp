/*
   CH-230-A
   a9 p5.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    string player_name;
    int random;
    int guess;
    
    // Getting the player's name
    cout << "Enter your name: ";
    getline (cin, player_name);
    
    srand (static_cast < unsigned int > (time(0)));
    random = (rand() % 100) + 1; // Random number from 1 to 100 

    cout << "Enter a number between 1 and 100:" << endl;
    
    int counter = 1;
    while (true)
    {
        cin >> guess; // Getting guess from the player

        if (guess<random) // The guess is smaller
        {
            cout << "Find a bigger number." << endl;
            counter++;
        }
        else if (guess>random) // The guess is bigger
        {
            cout << "Find a smaller number."<< endl;
            counter++;
        }
        else if (guess==random)
        {
            if (counter==1)
            {
                cout << "Congrats! You guessed it in 1 try." << endl;
            }
            else
            {
                cout<<"Congrats! You guessed it in "<<counter<<" tries."<<endl;
            }
            break;
        }
    }
    
    return 0;
}