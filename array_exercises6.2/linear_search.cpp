#include <iostream>
using namespace std;

int main()
{
    int pos = 0;
    bool found = false;

    const int SIZE = 101;
    int values[SIZE];

    values[10] = 100;

    while (pos < SIZE && !found)
    {
        if (values[pos] == 100)
        {
            found = true;
            cout << pos;
        }
        else
        {
            pos++;
        }
    }

    return 0;
}