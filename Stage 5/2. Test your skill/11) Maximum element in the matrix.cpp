/*
Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room, students are arranged in the form of rows and columns. Raju needs to find the highest mark in this class. Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then the second row and so on.

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT & OUTPUT:

3

2

4 5

6 9

0 3

The maximum element is 9
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

    int max_ = 0;
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
        {
            int marks = arr[i][j];
            if (max_<marks) max_ = marks;
        }
    cout << "The maximum element is " << max_;
}
