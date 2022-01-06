/*
   CH-230-A
   a11 p3.cpp
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

/* Class for wizard */
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

/* Class for unicorn */
class Unicorn : public Creature {
	public:
		Unicorn();
        ~Unicorn();
		void speed() const;

	private:
		double time;
};

/* Class for monster */
class Monster : public Creature {
	public:
		Monster();
        ~Monster();
		void jump() const;

	private:
		double jumps;
};
