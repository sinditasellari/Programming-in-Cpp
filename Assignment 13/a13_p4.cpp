/*
   CH-230-A
   a13 p4.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

// The problem was here, it was declared as 'public A'.
class B:  virtual public A 
{
public:
  B()  { setX(10); }
};

// Also here, it was declared as 'public A'.
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    /* print() method was ambiguous. Class D inherits both from B and C, but
       both class B and C contain print() method so they do not know which 
       method to use. The way to fix this error is to write virtual before 
       public A. The problem is now fixed. */
    return 0;
}