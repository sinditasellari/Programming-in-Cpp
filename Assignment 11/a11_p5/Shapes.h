/*
   CH-230-A
   a11 p5.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			  // base class
	private:   			  // private access modifier: could also be protected
		std::string name; // every shape will have a name 		
	public:
		Shape(const std::string&);   // builds a shape with a name
		Shape();					 // empty shape
		Shape(const Shape&);		 // copy constructor
		
		void setName(string&);    // setter
		string getName();		  // getter
		void printName() const ;  // prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		// Constructors
		CenteredShape(const std::string&, double, double);
		CenteredShape();
		CenteredShape(const CenteredShape&);
		// Setters
		void setX(double);					
		void setY(double);					
		// Getters
		double getX();				
		double getY();				
		void move(double, double); // moves the shape, i.e. it modifies it center	
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
	    // Constructors
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdges(int);   // setter
		int getEdges();	      // getter	
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {  
	private:
		double Radius;
	public:
	    // Constructors
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
	    void setRadius(double);	  // setter
		double getRadius();       // getter 		
		// perimeter and area
		double perimeter();			
		double area();			
};

// Rectangle with center, height and width
class Rectangle : public RegularPolygon {	
	private:
		double RecWidth, RecHeight;
	public:
	    // Constructors
		Rectangle(const std::string&, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);
		// Setters
		void setRecWidth(double);				
		void setRecHeight(double);				
		// Getters
		double getRecWidth();			
		double getRecHeight();			
		// perimeter and area
		double perimeter();					
		double area();						
};

// Square with center and side
class Square : public Rectangle {	
	private:
		double Side;
	public:
	    // Constructors
		Square(const std::string&, double, double, double);
		Square();
		Square(const Square&);
		// Setters
		void setSide(double);		
		// Getters
		double getSide();		
		// perimeter and area
		double perimeter();		
		double area();			
};
    
#endif