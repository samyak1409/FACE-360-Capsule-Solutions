/*
Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=1; i<=n; i++)
    {
        bool at_start = (i%2 == 0);
        if (at_start)
            cout << i+1;
        for (int j=1; j<n; j++)
            cout << i;
        if (not at_start)
            cout << i+1;
        cout << endl;
    }
}
