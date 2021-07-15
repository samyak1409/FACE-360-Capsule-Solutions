/*
Ashok is a ninth-grade schoolboy. Miss Sumaiya is a very strict teacher and she teaches math to all the students. On the first day of the academic year, Miss Sumaiya gave him homework to find the addition of two matrices. Can you help Ashok by writing a program for the same.
Input Format:

The first input contains an integer 'r' which denotes the number of rows

The second input contains an integer 'c' which denotes the number of columns

The remaining input denotes the inputs of matrix1 and matrix2

Output Format:

Print the addition of two matrices

Sample Input:

2

2

2 3

4 5

4 5

6 7

Sample Output:

6 8

10 12
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c; cin >> r >> c;
    int m1[r][c], m2[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> m1[i][j];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> m2[i][j];

    // ->
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cout << m1[i][j] + m2[i][j] <<' ';
        cout << endl;
    }
}
