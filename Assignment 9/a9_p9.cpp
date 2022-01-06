/*
   CH-230-A
   a9 p9.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main () {
	string list[] = {"computer",
                     "television",
                     "keyboard",
                     "laptop",
                     "mouse",
                     "singer",
                     "actor",
                     "scientist",
                     "teacher",
                     "programmer",
                     "architect",
                     "designer",
                     "specialist",
                     "policeman",
                     "doctor",
                     "politician",
                     "worker"};

	string str, word, str1;
	int i, counter = 1;

	while (true)
    {
	    srand(static_cast<unsigned int>(time(0)));
	    i = (rand() % 17);
	    str = list[i];

        string v = "aeiouy"; // The group of vowels
        // Vowels are replaced with underscores
        // Using find_first_of() function
		while (str.find_first_of(v) != string::npos)
        {
            str[str.find_first_of(v)] = '_'; 
        }
        
	   	cout<<str<<endl;

	    while (true)
        {
	    	/* The player enters a word.
            He enters again if the word is not correct */
	        cin>>word;

	        if (word != list[i])
            {
	            cout<<"Incorrect. Try again!"<<endl;
	            counter++;
	        }
	    	else
            {
	            if (counter==1)
                {
	                cout<<"Congrats! You guessed it in 1 try."<<endl;
	            }
	            else
                {
	                cout<<"Congrats! You guessed it in "<<counter<<" tries."<<endl;
	            }
	            break;
	        }
	    }
	    /* Asking the player.
        If he doesn't want to play, the program stops its execution. */
	    cout<<"Keep playing? Press 'yes' or 'quit':"<<endl;
	    cin>>str1;
	    if (str1=="quit")
        {
	    	break;
		}
    }
    return 0;
}