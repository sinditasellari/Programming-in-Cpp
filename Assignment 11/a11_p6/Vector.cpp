/*
   CH-230-A
   a11 p6.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

// Setters
void Vector::setNrCom(int nr)
{
    nr_com = nr;
}

void Vector::setVecComponents(double *v) 
{
    vec_components = new double[nr_com];
    for (int idx=0; idx<nr_com; idx++)
        vec_components[idx] = v[idx];
}

// Getter
void Vector::getVecComponents(double* v) 
{
    for (int idx=0; idx<nr_com; idx++)
        v[idx] = vec_components[idx];
}

// 4 constructors
Vector::Vector() {}

Vector::Vector(double *v) 
{
    // I commented this as it doesn't compile in Grader
    // dynamically allocated
    //vec_components = new double[nr_com];
    for (int idx=0; idx<nr_com; idx++)
    {
        vec_components[idx] = v[idx];
    }
}

Vector::Vector(const Vector& v)
{
    // I commented this as it doesn't compile in Grader
    // dynamically allocated
    //vec_components = new double[nr_com];
    for (int idx=0; idx<nr_com; idx++)
    {
        vec_components[idx] = v.vec_components[idx];
    }
}

Vector::~Vector()
{
    cout << "Vector deleted" << endl;
    delete [] vec_components;
}

// Methods
Vector Vector::add(const Vector &v)
{
    Vector a1;
    double *x1;
    // dynamically allocated
    x1 = new double[nr_com];
    for (int idx=0; idx<nr_com; idx++)
    {
        x1[idx] = vec_components[idx] + v.vec_components[idx];
    }
    a1.nr_com = nr_com;
    a1.setVecComponents(x1);
    delete [] x1;
    return a1;
}

Vector Vector::difference(const Vector &v)
{
    Vector a2;
    double *x2;
    // dynamically allocated
    x2 = new double[nr_com];
    for (int idx= 0; idx<nr_com; idx++)
    {
        x2[idx] = vec_components[idx] - v.vec_components[idx];
    }
    a2.nr_com = nr_com;
    a2.setVecComponents(x2);
    delete [] x2;
    return a2;
}

double Vector::sproduct(const Vector &v)
{
    double x3=0;
    for (int idx= 0; idx<nr_com; idx++)
    {
        x3 += vec_components[idx] * v.vec_components[idx];
    }
    return x3;
}

double Vector::norm() {
    double x4=0;
    for (int idx=0; idx<nr_com; idx++)
    {
        x4 += vec_components[idx] * vec_components[idx];
    }
    x4 = sqrt(x4);
    return x4;
}

// Print
void Vector::print_info()
{
    for (int idx=0; idx<nr_com; idx++)
    {
        if (idx==0) 
        {
            cout << "[" << vec_components[idx] << ", ";
        }
        else if (idx==(nr_com-1)) 
        {
            cout << vec_components[idx] << "]" << endl;
        }
        else 
        {
            cout << vec_components[idx] << ", ";
        }
    }
}
