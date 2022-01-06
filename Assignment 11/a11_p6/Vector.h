/*
   CH-230-A
   a11 p6.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#ifndef _VECTOR_H
#define _VECTOR_H

class Vector {
    private:
      int nr_com;
      double *vec_components;

    public:
      // 4 Constructers
      Vector();
      Vector(double*);
      Vector(const Vector&);
      ~Vector();
      void setNrCom(int);             // setter
      void setVecComponents(double*); // setter
      void getVecComponents(double*); // getter
      // Methods
      Vector add(const Vector&);
      Vector difference(const Vector&);
      double sproduct(const Vector&);
      double norm();
      void print_info();
};

#endif // _VECTOR_H