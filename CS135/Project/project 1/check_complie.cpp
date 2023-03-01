/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task A

This program
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string.h> // allows for substr() and find() (?)

using namespace std;

string maskWord(string word)
{
    string blank;
    for (int ch = 0; ch < word.size(); ch++)
    {
        blank = blank + "_";
    }

    return blank;
}

int main()
{
    string result = maskWord("Hello");
    cout << result;
}