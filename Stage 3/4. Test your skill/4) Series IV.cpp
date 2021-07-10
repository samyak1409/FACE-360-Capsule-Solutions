/*
Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=1; i<=n; i++)
        cout << i*i - ((i%2 == 0)?(2):(1)) << ' ';
}
