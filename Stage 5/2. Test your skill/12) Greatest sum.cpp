/*
Seenu have a fruit shop. He is arranged the some set of fruits are column and row wise. Seenu needs to find which row and column has maximum number of fruits. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 6 8

2 5 1

3 8 2

Sum of rows is 15 8 13

Row 1 has maximum sum

Sum of columns is 6 19 11

Column 2 has maximum sum
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

    int r_sum[r], r_max = 0, r_max_i;
    for (int i=0; i<r; i++)
    {
        int sum = 0;
        for (int j=0; j<c; j++)
            sum += arr[i][j];
        r_sum[i] = sum;
        if (r_max<sum)
        {
            r_max = sum;
            r_max_i = i;
        }
    }
    int c_sum[c], c_max = 0, c_max_i;
    for (int i=0; i<c; i++)
    {
        int sum = 0;
        for (int j=0; j<r; j++)
            sum += arr[j][i];
        c_sum[i] = sum;
        if (c_max<sum)
        {
            c_max = sum;
            c_max_i = i;
        }
    }
    cout << "Sum of rows is ";
    for (int i=0; i<r; i++)
        cout << r_sum[i] << ' ';
    cout << "\nRow " << r_max_i+1 << " has maximum sum \n";
    cout << "Sum of columns is ";
    for (int i=0; i<c; i++)
        cout << c_sum[i] << ' ';
    cout << "\nColumn " << c_max_i+1 << " has maximum sum\n";
}
