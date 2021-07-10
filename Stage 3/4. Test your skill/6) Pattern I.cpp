/*
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3
44
555
6666
6666
555
44
3
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<=i; j++)
            cout << n+i;
        cout << endl;
    }
    for (int i=3; i>-1; i--)
    {
        for (int j=0; j<=i; j++)
            cout << n+i;
        cout << endl;
    }
}
