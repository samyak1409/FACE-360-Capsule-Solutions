/*
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

4

Sample Output:

121 225 361 529
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

  	int x = 11;
    for (int i=0; i<n; i++)
    {
        cout << x*x << ' ';
        x += 4;
    }
}

// yes, same as Series II :|
