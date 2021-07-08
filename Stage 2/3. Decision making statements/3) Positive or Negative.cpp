/*
Elsa is new to concept of positive and negative numbers. Can you help her to check whether the given number is positive or negative.
Input consist of an integer.

[Hint : Consider zero as a positive integer]
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x<0)
        cout << x << " is a negative number.";
    else
        cout << x << " is a positive number.";
}
