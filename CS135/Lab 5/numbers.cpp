/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 5A

This program includes a lot of function definitions that has to do with prime
numbers.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);

int main()
{
    /*
    cout << "Input two integer numbers seperated by a space: ";
    int one;
    int two;
    cin >> one >> two;

    bool result = isDivisibleBy(one, two);
    if (result == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    cout << "Enter an integer: ";
    int num;
    cin >> num;
    
    bool result = isPrime(num);
    if (result == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    cout << "Enter an integer: ";
    int num;
    cin >> num;

    int result = nextPrime(num);
    cout << result;
    
    cout << "Enter two integers separated by a space: ";
    int one;
    int two;
    cin >> one >> two;

    int result = countPrimes(one, two);
    cout << result;

    cout << "Enter an integer: ";
    int num;
    cin >> num;
    
    int result = isTwinPrime(num);
    if (result == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    cout << "Enter an integer: ";
    int num;
    cin >> num;

    int result = nextTwinPrime(num);
    cout << result;
    */

    cout << "Enter two integers separated by a space: ";
    int one;
    int two;
    cin >> one >> two;

    int result = largestTwinPrime(one, two);
    cout << result;

    return 0;
}

bool isDivisibleBy(int n, int d)
{
    if (d == 0)
    {
        return false;
    }
    
    if (n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int factor = 2; factor < n; factor++)
    {
        if (n % factor == 0)
        {
            return false;
        }
    }

    return true;
}

int nextPrime(int n)
{
    bool result;
    do
    {
        n++;
        result = isPrime(n);
    } while (result == false);

    return n;
}

int countPrimes(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        int result = isPrime(i);
        if (result == true)
        {
            count++;
        }
    }

    return count;
}

bool isTwinPrime(int n)
{
    if (isPrime(n) && (isPrime(n - 2) || isPrime(n + 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    int result;
    do
    {
        result = nextPrime(n);
        n = result;
    } while (isTwinPrime(result) == false);

    return n;
}

int largestTwinPrime(int a, int b)
{
    for (int i = b; i >= a; i--)
    {
        if (isTwinPrime(i) == true)
        {
            return i;
        }
    }

    return -1;
}