/*
   CH-230-A
   a10.p7.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
    cout << "Calling parametric constructor" <<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	cout << "Calling copy constructor" <<endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	cout << "Updating..." <<endl;
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << "Printing..." <<endl;
	cout << str << endl;
}

// Implementing funcByRef() method 
void funcByRef(NaiveString &s)
{
    cout << "funcbyref() being called" << endl;
	s.update('B', 'C');
	s.print();
}

// funcByVal() method 
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	// Using different constructors 
	
	NaiveString *a = new NaiveString ("aBcBdB");
	a->print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(*a);
	cout << endl;

	NaiveString *b = new NaiveString (*a);
	b->print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(*b);
	cout << endl;
	
	NaiveString *c = new NaiveString ("aaBBaa");
	c->print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(*c);

	delete a; // free the memory
	delete b;
	delete c;
}