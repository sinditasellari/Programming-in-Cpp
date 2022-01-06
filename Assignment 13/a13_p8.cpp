/*
   CH-230-A
   a13 p8.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <exception>

using namespace std;

// 3 classes

class Motor {
public:
    // throw 
    virtual const char* what() const throw ()
    {
        return "This motor has problems";
    }
};

class Car : public Motor {
public:
    Car(){}
    ~Car(){} 
};

class Garage : public Car {
    string a;
public:
    Garage(string stringa) 
    {
        a = stringa;
        cout << stringa << endl;
    }
    // Try block
    Garage()try : Car() 
    {
        throw Garage("The car in this garage has problems with the motor");
    } catch(Motor& motor1) 
    { 
        cerr << motor1.what() << endl;
    }
};

int main ()
{
    // Try and catch block
    try {
        Garage garage1;
    } catch(Garage& garage1) 
    {
        cout << garage1.what() << endl; 
    }
    return 0;
}