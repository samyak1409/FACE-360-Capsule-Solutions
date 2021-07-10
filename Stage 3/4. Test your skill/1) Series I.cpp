/*
Write a program to generate the first 'n' terms of the following series 0.5, 1.5, 4.5, 13.5, ...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

5

Sample Output:

0.5 1.5 4.5 13.5 40.5
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    float x = .5;
    for (int i=0; i<n; i++)
    {
        cout << x << ' ';
        x *= 3;
    }
}
