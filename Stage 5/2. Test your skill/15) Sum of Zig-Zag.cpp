/*
Write a C++ program to find the sum of Zig-Zag pattern in a given matrix. FUNCTIONAL REQUIREMENTS: int sumZigZag(int, int, int **);
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT:

3

3

1 2 3

4 5 6

7 8 9

SAMPLE OUTPUT:

Sum of Zig-Zag pattern is 35
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

    int sum = 0;
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            if (i==0 || i==r-1 || i==c-1-j)
                sum += arr[i][j];
    cout << "Sum of Zig-Zag pattern is " << sum;
}
