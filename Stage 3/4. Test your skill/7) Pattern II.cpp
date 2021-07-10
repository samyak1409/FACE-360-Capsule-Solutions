/*
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

  	int x = 1;
    for (int i=0; i<n; i++)
    {
        if (i%2 == 0)
        {
            for (int j=0; j<=i; j++)
                cout << x++ << ((j<i)?("*"):(""));
        }
        else
        {
            x += i+1;
            int temp = x;
            for (int j=0; j<=i; j++)
                cout << --temp << ((j<i)?("*"):(""));
        }
        cout << endl;
    }
}
