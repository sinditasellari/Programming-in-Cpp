/*
   CH-230-A
   a9 p8.cpp
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <climits>
using namespace std;

void subtract_max(int* arr, int values)
{
       int idx, maximum = arr[0];
       // Determining the maximum value in the array
       for (idx=0; idx<values; idx++)
       {
           if (maximum<arr[idx])
           {
               maximum = arr[idx];
           }		
	   }
       // Subtracting this maximum from all elements of the array
       for (idx=0; idx<values; idx++)
       {
               arr[idx] -= maximum;
       }
}

// Freeing memory
void deallocate(int arr[])
{
        delete[] arr;
}

int main () {
        int n;
        cout << "How many values? "; 
        cin >> n;
        int* a = new int[n];
        for (int idx = 0; idx < n; idx++){
                cout << "Enter a value: ";
                cin >> a[idx];
        }

        cout << "Subtractiong the maximum value from all elements... " <<endl;
        subtract_max(a, n);
        // Printing the new array
        cout << "The new array is: " <<endl;
        for (int idx = 0; idx < n; idx++){
                cout << a[idx] << ", ";
        }
        cout << endl;
        
        deallocate(a);
        return 0;
}