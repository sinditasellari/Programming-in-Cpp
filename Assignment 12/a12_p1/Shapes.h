/*
   CH-230-A
   a12.p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double); // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	protected: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape { 
	protected:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

// A hexagon is a regular polygon with 6 sides 
class Hexagon: public RegularPolygon { 
	private:
		double hex_side;
		std::string hex_color;
	public:
		// Parametric constructor
		Hexagon(const std::string&, double, double, int, double, const std::string&);
		Hexagon(const Hexagon&);                // Copy constructor
		~Hexagon();                             // Destructor
		void setHexSide(double);                // Setters
		void setHexColor(const std::string&);
		double getHexSide();                    // Getters
		std::string getHexColor(); 
	    // Perimeter and area
		double HexPerimeter();
		double HexArea();
};
	    
#endif