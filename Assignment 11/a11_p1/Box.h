/*
   CH-230-A
   a11 p1.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

class Box
{
    private:
        double h;
        double w;
        double d;

    public:
        Box(); // Default constructor 
        Box(double, double, double); // Constructor which sets the data members
        Box(const Box&); // Copy constructor
        ~Box(); // Destructor
        // Methods for setting and getting the height, the width and the depth
        void setHeightValue(double h1);
        void setWidthValue(double w1);
        void setDepthValue(double d1);
        double box_volume(); // Method for finding the volume
        double getHeightValue();
        double getWidthValue();
        double getDepthValue();
};