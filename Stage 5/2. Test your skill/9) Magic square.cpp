/*
A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers.

The first integer corresponds to the number of rows/columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then second row and so on.

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int m[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> m[i][j];

    int f = 0, b = 0;
    for (int i=0; i<n; i++)
    {
        f += m[i][i];
        b += m[i][(n-1)-i];
    }
    cout << ((f==b)? "Yes" : "No");
}
