/*
Write a program to print the trapezium pattern.
Sample Input:

4

Sample Output:

1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

  	int x = 0, y = n*n;
    for (int i=0; i<n; i++)  // loop over n lines
    {
        // '-' pattern:
        for (int j=0; j<i; j++)
            cout << "--";

        // normal counting:
        for (int j=i; j<n; j++)
            cout << ++x << '*';

        // upside down counting:
        for (int j=i; j<n-1; j++)
            cout << ++y << '*';
        cout << ++y;
        y -= 2*(n-i)-1;  // reconfiguring y

        cout << endl;
    }
}
