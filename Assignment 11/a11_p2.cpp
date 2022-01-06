/*
   CH-230-A
   a11 p2.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>

using namespace std;

/* Class for creature */
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

/* Class for wizard */
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

// Constructor
Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard is here.\n";
}  

// Method
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Destructor
Wizard::~Wizard()
{
    cout << "Wizard is leaving. Bye Bye!\n";
}

/* Class for unicorn */
class Unicorn : public Creature {
	public:
		Unicorn();
        ~Unicorn();
		void speed() const;

	private:
		double time;
};

// Constructor
Unicorn::Unicorn() : time(5)
{
    cout << "Unicorn is here.\n";
}

// Method
void Unicorn::speed() const
{
    cout << "Her speed is " << (distance/time) << " meters per second.\n";
}

// Destructor
Unicorn::~Unicorn()
{
    cout << "Unicorn is leaving. Bye bye!\n";
}

/* Class for monster */
class Monster : public Creature {
	public:
		Monster();
        ~Monster();
		void jump() const;

	private:
		double jumps;
};

// Constructor
Monster::Monster() : jumps(30)
{
    cout << "Monster is here.\n";
}

// Method
void Monster::jump() const
{
    cout << "Now the monster is jumping for " << distance << 
    " meters. He's making " << (jumps/distance) << " jumps per meter.\n";
}

// Destructor
Monster::~Monster()
{
    cout << "\nMonster is leaving. Bye bye!\n";
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u;
    u.run();
    u.speed();

    cout << "\nCreating a Monster.\n";
    Monster m;
    m.run();
    m.jump();

    return 0;
} 