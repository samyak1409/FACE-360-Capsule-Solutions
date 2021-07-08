/*
Ask a user for his/her birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). Write a program to find the users current age in years.
INPUT FORMAT:

Input consists of 2 integers.

The first integer corresponds to the last 2 digits of the birth year.

The second integer corresponds to the last 2 digits of the current year.

OUTPUT FORMAT:

Print the user's current age.

Refer below sample output for formatting.

SAMPLE INPUT:

62

00

SAMPLE OUTPUT:

38
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x>y)
        cout << y+100-x;
    else
        cout << y-x;
}
