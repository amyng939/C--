/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 2 Task A

This program
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

char DNAbase_to_mRNAbase(char nucleobase);

int main()
{
    ifstream fin("dna.txt");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading.";
        exit(1);
    }

    string strand;
    while (getline(fin, strand))
    {
        DNA_to_mRNA(strand);
    }
    fin.close();
    return 0;
}

char DNAbase_to_mRNAbase(char nucleobase)
{
    if (nucleobase == "A")
    {
       nucleobase = "U";
    }
    else if (nucleobase == "T")
    {
       nucleobase = "A";
    }
    else if (nucleobase == "C")
    {
       nucleobase = "G";
    }
    else
    {
       nucleobase = "C";
    }
}

string DNA_to_mRNA(string strand)
{

}