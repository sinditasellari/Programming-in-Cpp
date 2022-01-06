/*
   CH-230-A
   a13 p3.cpp 
   Sindi Tasellari
   stasellari@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
using namespace std;

/* Open a file */
void open_file (string filename, ifstream& in)
{
    const char* fn1 = filename.c_str();
    if (!in.is_open())
    {
        in.open(fn1, ios::in | ios::binary);
    }
}

/* Find and return the length of a file */
int get_file_length (ifstream& in)
{
    in.seekg(0, ios::end);
    int len = in.tellg();
    in.seekg(0, ios::beg);
    return len;
}

int main () {
    /* Input */
    int n;
    cin >> n;
    string filenames[n];
    for (int idx=0; idx<n; idx++)
    {
        cin >> filenames[idx];
    }

    /* Open output file */
    ofstream out;
    if (!out.is_open())
    {
        out.open("concatn.txt", ios::out | ios::binary);
        if (out.bad())
        {
            cerr << "Error!\n";
            exit(1);
        }
    }

    /* Go through the input files and concatenate them */
    for (int idx=0; idx<n; idx++)
    {

        /* Open and check the current input file */
        ifstream in;
        open_file(filenames[idx], in);
        if (in.bad())
        {
            cerr << "Error!\n";
            continue;
        }

        /* Read from the input file and insert into output file */
        int len = get_file_length(in);
        char *buf = new char[len+1];
        in.read(buf, len);
        buf[len] = '\n';
        out.write(buf, len+1);
        delete [] buf;

        in.close(); 
    }

    out.close();

    return 0;
}