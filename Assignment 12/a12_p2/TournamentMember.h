/*
   CH-230-A
   a12 p2.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

using namespace std;

class TournamentMember
{
    private:
        char first[36];
        char last[36];
        char birth[11];
        string eyescolor;
        string haircolor;
        static char location[25];

    public:
        TournamentMember(); // default constructors
        ~TournamentMember(); // destructor
        TournamentMember(const char*, const char*, const char*,string,string); 
        TournamentMember(const TournamentMember&); // copy constructors
        
        // Setter and getter methods
        void setFirst(const char* first1);
        void setLast(const char* last1);
        void setBirth(const char* birth1);
        void setEyes(string eyescolor1);
        void setHair(string haircolor1);
        string getFirst();
        string getLast();
        string getBirth();
        string getEyes();
        string getHair();
        
        // Other methods
        void print_info();
        static void change(const char*);
};

// Inline methods

inline void TournamentMember::setFirst(const char* first1)
{
    int idx;
    for (idx=0; idx<36; idx++)
    {
        first[idx] = first1[idx];
    }
}

inline void TournamentMember::setLast(const char* last1)
{
    int idx;
    for (idx=0; idx<36; idx++)
    {
        last[idx] = last1[idx];
    }
}

inline void TournamentMember::setBirth(const char* birth1)
{
    int idx;
    for (idx=0; idx<11; idx++)
    {
        birth[idx] = birth1[idx];
    }
}

inline void TournamentMember::setEyes(string eyescolor1)
{
    eyescolor = eyescolor1;
}

inline void TournamentMember::setHair(string haircolor1)
{
    haircolor = haircolor1;
}

inline string TournamentMember::getFirst() { return first; }

inline string TournamentMember::getLast() { return last; }

inline string TournamentMember::getBirth() { return birth; }

inline string TournamentMember::getEyes() { return eyescolor; }

inline string TournamentMember::getHair() { return haircolor; }

#endif // TOURNAMENTMEMBER_H