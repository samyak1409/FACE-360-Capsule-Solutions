/*
Seenu have a fruit shop and arranged the some set of fruits in column and row wise. Seenu needs to find the total number of fruits in each rows. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 2 3

7 3 1

7 4 1

6

11

12
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

    for (int i=0; i<r; i++)
    {
        int sum = 0;
        for (int j=0; j<c; j++)
            sum += arr[i][j];
        cout << sum << endl;
    }
}
