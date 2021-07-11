/*
Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications

SAMPLE INPUT & OUTPUT:

Enter the value of a

2

Enter the value of n

8

The value of 2 power 8 is 256
*/

#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (n == 0)  // base condition
        return 1;
    else
        return (a * power(a, n-1));  // recursion
}

int main()
{
    int a, n;
    cout << "Enter the value of a \n"; cin >> a;
    cout << "Enter the value of n \n"; cin >> n;

    cout << "The value of " << a << " power " << n << " is " << power(a, n);
}
