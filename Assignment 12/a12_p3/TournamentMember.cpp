/*
   CH-230-A
   a12 p3.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

char TournamentMember::location[25] = "Albania";

TournamentMember::TournamentMember(const char* x1, const char* x2, 
const char* x3, string x4, string x5) : eyescolor(x4), haircolor(x5)
{
        int idx;
        cout << "Parametric constructor coming!" << endl;

        for (idx=0; idx<36; idx++)
        {
            first[idx] = x1[idx];
        }
        for (idx=0; idx<36; idx++)
        {
            last[idx] = x2[idx];
        }
        for (idx=0; idx<11; idx++)
        {
            birth[idx] = x3[idx];
        }
}

TournamentMember::TournamentMember(const TournamentMember& copy)
{
    int idx;
    cout << "Copy constructor coming!" << endl;

    for (idx=0; idx<36; idx++)
    {
        first[idx] = copy.first[idx];
    }
    for (idx=0; idx<36; idx++)
    {
        last[idx] = copy.last[idx];
    }
    for (idx=0; idx<11; idx++)
    {
        birth[idx] = copy.birth[idx];
    }
    eyescolor = copy.eyescolor;
    haircolor = copy.haircolor;
}

TournamentMember::TournamentMember()
{
    cout << "Default constructor coming!" << endl;
}

TournamentMember::~TournamentMember()
{
    cout << "Destructor coming!" << endl;
}

// Method to change the location
void TournamentMember::change(const char* l) 
{
    int idx;
    for (idx=0; idx<25; idx++)
    {
        location[idx] = l[idx];
    }
}

// Method to print
void TournamentMember::print_info() 
{
    cout << endl;
    cout << "First name: " << first << endl;
    cout << "Last name: " << last << endl;
    cout << "Date of birth: " << birth << endl;
    cout << "Eyes color: " << eyescolor << endl;
    cout << "Hair color: " << haircolor << endl;
    cout << "Location: " << location << endl;
    cout << endl;
}



// Player class

Player::Player(const char* x1, const char* x2, const char* x3, string x4, 
string x5, int x6, string x7, int x8, string x9):
TournamentMember(x1, x2, x3, x4, x5)
{
        cout << "Another parametric constructor coming!" << endl;
        num = x6;
        pos = x7;
        goals = x8;
        footed = x9;
}

Player::Player(const Player& p)
{
    int idx;
    cout << "Another copy constructor coming!" << endl;

    for (idx=0; idx<36; idx++)
    {
        first[idx] = p.first[idx];
    }
    for (idx=0; idx<36; idx++)
    {
        last[idx] = p.last[idx];
    }
    for (idx=0; idx<11; idx++)
    {
        birth[idx] = p.birth[idx];
    }
    eyescolor = p.eyescolor;
    haircolor = p.haircolor;
    num = p.num;
    pos = p.pos;
    goals = p.goals;
    footed = p.footed;
}

Player::Player()
{
    cout << "Another default constructor coming!" << endl;
}

Player::~Player()
{
    cout << "Another destructor coming!" << endl;
}

// Method to print
void Player::print_other()
{
    cout << "The number of player: " << num << endl;
    cout << "Position: " << pos << endl;
    cout << "Goals: " << goals << endl;
    cout << "Left/Right footed: " << footed << endl;
    cout << endl;
}

// Method to increase the goals
void Player::more_goals()
{
    goals++;
}