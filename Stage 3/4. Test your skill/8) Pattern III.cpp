/*
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<i; j++)
            cout << i << '*';
        cout << i << endl;
    }
    for (int i=n; i>0; i--)
    {
        for (int j=1; j<i; j++)
            cout << i << '*';
        cout << i << endl;
    }
}

// similar to Pattern I
