/*
   CH-230-A
   a9 p6.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* Functions declarations */
int myfirst(int a[], int n);
double myfirst(double array[], int size);
char myfirst(char array[], int size);

int main () {
    int first_array[7] {-27, -320, -34, 19, 4, 3, 2};
    cout << myfirst(first_array, 7) << endl;

    double second_array[5] {3.89, -3, -67, 52.1, -6.88};
    cout << myfirst(second_array, 5) << endl;

    char third_array[5] {'s', 'i', 'n', 'd', 'i'};
    cout << myfirst(third_array, 5) << endl;

    return 0;
}

/* Finding the first positive and even value */
int myfirst(int a[], int n)
{
    int idx;
    for (idx=0; idx<n; idx++)
    {
        if (a[idx]>0 && a[idx]%2==0)
        {
            return a[idx];
        }
    }
    return -1;
}

/* Finding the first negative element that doesn't have a fractional part */
double myfirst(double a[], int n)
{
    int idx;
    for (idx=0; idx<n; idx++)
    {
        if (a[idx]<0 && ((int)a[idx] == (double)a[idx]))
        {
            return a[idx];
        }
    }
    return -1.1;
}

/* Finding the first consonant */
char myfirst (char a[], int n)
{
    int idx;
    for (idx=0; idx<n; idx++)
    {
        if (((a[idx]>=65 && a[idx]<=90)||(a[idx]>=97 && a[idx]<=122))
        &&((a[idx]!='A')&&(a[idx]!='E')&&(a[idx]!='I')&&(a[idx]!='O')
        &&(a[idx]!='U')&&(a[idx]!='Y')&&(a[idx]!='a')&&(a[idx]!='e')
        &&(a[idx]!='i')&&(a[idx]!='o')&&(a[idx]!='u')&&(a[idx]!='y')))
        {
            return a[idx];
        }
    }
    return '0';
}

