/*
Raju has a square shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the element of a row into a column element and column element into a row element without altering the shape of the puzzle. Help raju to solve this puzzle. FUNCTIONAL REQUIREMENTS: int** createArray(int,int); int getElement(int**,int,int); int addMatrix(int**,int**,int**,int,int);
Input Format:

Enter the row and column of a matrix Enter the matrix

Output Format:

Addition of a matrix

Sample Input:

2

2

1

2

3

4

1

2

3

4

Sample Output:

2 4

6 8
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c; cin >> r >> c;
    int m1[r][c], m2[r][c];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> m1[i][j];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> m2[i][j];

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
            cout << m1[i][j]+m2[i][j] << ' ';
        cout << endl;
    }
}
