/*
In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element in each column of the matrix.)
Input Format:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then second row and so on.

Assume that the maximum value of m and n is 10.

Output Format:

Refer to the sample output for details.

Sample Input:

3

2

4 5

6 9

0 3

Sample Output:

6

9
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c; cin >> r >> c;
    int arr[r][c];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> arr[i][j];

    for (int i=0; i<c; i++)
    {
        int max_ = 0;
        for (int j=0; j<r; j++)
        {
            int age = arr[j][i];
            if (max_<age) max_ = age;
        }
        cout << max_ << endl;
    }
}
