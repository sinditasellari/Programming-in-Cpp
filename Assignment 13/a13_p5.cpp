/*
   CH-230-A
   a13 p5.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
/* Since class B and class C are 'virtual public A', 
   extending class D with B and C does not make a direct 
   connection with class A. Class D does not have any
   concept of A constructor so we need to call it manually. */
    public:
    D():A(10) {  }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}