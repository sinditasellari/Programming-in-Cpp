/*
   CH-230-A
   a13 p7.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

// The class of OwnException
class OwnException : public exception
{
    private:
    string string1;

    public:
        // Parametric constructor
        OwnException(string string2)
        {
            string1 = string2;
            cout << string1 << endl;
        }
        
        const char* what () const throw ()
        {
            return "OwnException\n";
        }

        // Destructor
        virtual ~OwnException()throw() {}
};

void function (int number)
{
    switch (number) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException("Default case exception");
    }
}

int main () {
    // Calling the function in its four versions
    try 
    {
        function(1);
    } catch (char a) 
    {
        cerr << "Caught in main: " << a << endl;
    }
    try 
    {
        function(2);
    } catch (int b)
    {
        cerr << "Caught in main: " << b << endl;
    }
    try 
    {
        function(3);
    } catch (bool c)
    {
        cerr << "Caught in main: " << c << endl;
    }
    try 
    {
        function(4);
    }
    catch(OwnException& d) 
    {
        cerr << "Caught in main: " << d.what() << endl;
    }
    return 0;
}