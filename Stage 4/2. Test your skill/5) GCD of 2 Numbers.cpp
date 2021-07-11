/*
Write a program to compute GCD of 2 numbers using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

36

27

G.C.D of 36 and 27 = 9
*/

#include <iostream>
using namespace std;

// METHOD 1:
int gcd1(int x, int y, int z)
{
    if (x%z == 0 && y%z == 0)  // base condition
        return z;
    else
        return gcd1(x, y, z-1);  // recursion
}

// METHOD 2:
int gcd2(int x, int y)
{
    if (!y)  // base condition
        return x;
    else
        return gcd2(y, x%y);  // recursion
}

int main()
{
    int x, y; cin >> x >> y;
    // cout << "G.C.D of " << x << " and " << y << " = " << gcd1(x, y, (x<y?x:y)) << endl;
    cout << "G.C.D of " << x << " and " << y << " = " << gcd2(x, y);
}
